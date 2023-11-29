#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array
char filename[20];
FITNESS_DATA data[300];

// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}




// Complete the main function
int main() {

    char choice;
    int num_of_records = 0;
    int buffer_size = 100;
    char line_buffer[buffer_size];
    char line_buffer2[buffer_size];

    int smallest = 99999999;
    char smallest_time[6];
    char smallest_date[11];

    int largest = 0;
    char largest_time[6];
    char largest_date[11];

    int period_length = 0;
    int current_streak = 0;

    char period_strt_time[6];
    char period_strt_date[11];
    char period_end_time[6];
    char period_end_date[11];

    char temp_strt_time[6];
    char temp_strt_date[11];
    char temp_end_time[6];
    char temp_end_date[11];

    int total = 0;

    while (1)
    {
        

        printf("Menu Options:\n");
        printf("A: Specify the filename to be imported\n");
        printf("B: Display the total number of records in the file\n");
        printf("C: Find the date and time of the timeslot with the fewest steps\n");
        printf("D: Find the date and time of the timeslot with the largest number of steps\n");
        printf("E: Find the mean step count of all the records in the file\n");
        printf("F: Find the longest continuous period where the step count is above 500 steps\n");
        printf("Q: Quit\n");
        printf("Enter Choice: ");

        choice = getchar();

        while (getchar() != '\n');

        switch (choice)
        {
            case 'A':
            case 'a':
                printf("Input filename: ");
                scanf("%s", &filename);

                FILE *file = fopen(filename, "r");
         
                if (!file)
                {
                    printf("Error: Could not find or open the file\n");
                    return 1;
                    break;
                }

                printf("File successfully loaded.\n");
                choice = getchar();
                break;
            

            case 'B':
            case 'b':

                 while (fgets(line_buffer, buffer_size, file) != NULL)
                 {
                    num_of_records++;
                 }
                 printf("Total records: %d\n", num_of_records);
                 break;

            case 'C':
            case 'c':

                rewind(file);

                while (fgets(line_buffer, buffer_size, file) != NULL)
                {
                    // Split record
                    char date[11];
                    char time[6];
                    char steps[10];
                    tokeniseRecord(line_buffer, ",", date, time, steps);
                    

                    if (smallest > atoi(steps))
                    {
                        smallest = atoi(steps);
                        strcpy(smallest_date, date);
                        strcpy(smallest_time, time);

                    } 
                }
                printf("Fewest steps: %s %s\n", smallest_date, smallest_time);
                break;
            
            case 'D':
            case 'd':

                rewind(file);

                while (fgets(line_buffer, buffer_size, file) != NULL)
                {
                    // Split record
                    char date[11];
                    char time[6];
                    char steps[10];
                    tokeniseRecord(line_buffer, ",", date, time, steps);
                    

                    if (largest < atoi(steps))
                    {
                        largest = atoi(steps);
                        strcpy(largest_date, date);
                        strcpy(largest_time, time);

                    } 
                }
                printf("Largest steps: %s %s\n", largest_date, largest_time);
                break;

            case 'E':
            case 'e':

                rewind(file);

                while (fgets(line_buffer, buffer_size, file) != NULL)
                {
                    // Split record
                    char date[11];
                    char time[6];
                    char steps[10];
                    tokeniseRecord(line_buffer, ",", date, time, steps);
                    total = total + atoi(steps);
                }

                printf("Mean step count: %d\n", total/ num_of_records);
                break;
            
            case 'F':
            case 'f':
                
                rewind(file);

                while (fgets(line_buffer, buffer_size, file) != NULL)
                {
                    // Split record
                    char date[11];
                    char time[6];
                    char steps[10];
                    tokeniseRecord(line_buffer, ",", date, time, steps);
                    if (atoi(steps) > 500)
                    {
                        current_streak++;
                        if (current_streak == 1)
                        {
                            strcpy(temp_strt_date, date);
                            strcpy(temp_strt_time, time);
                        }
                        else
                        {   
                            strcpy(temp_end_date, date);
                            strcpy(temp_end_time, time);
                        }
                    }
                    else if (current_streak > 0)
                    {
                        if (current_streak > period_length)
                        {
                            period_length = current_streak;
                            strcpy(period_strt_date, temp_strt_date);
                            strcpy(period_strt_time, temp_strt_time);
                            strcpy(period_end_date, temp_end_date);
                            strcpy(period_end_time, temp_end_time);
                        }
                        current_streak = 0;
                    }
                }
                printf("Longest period start: %s %s\n", period_strt_date, period_strt_time);
                printf("Longest period end: %s %s\n", period_end_date, period_end_time);
                break;



            case 'Q':
            case 'q':
                return 0;
                break;

            default:
                printf("Incorrect choice\n");

        }


    }
   
}