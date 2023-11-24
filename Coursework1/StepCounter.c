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


            case 'B':
            case 'b':
                int num_of_records = 0;
                int buffer_size = 100;
                char line_buffer[buffer_size];

                 while (fgets(line_buffer, buffer_size, file) != NULL)
                 {
                    num_of_records++;
                 }
                 printf("Total records: %d", num_of_records);


        }


    }
   
}