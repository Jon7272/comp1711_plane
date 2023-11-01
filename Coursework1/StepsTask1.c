#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



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

    // Open the file to be read
    char filename[] = "FitnessData_2023.csv";
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror(" ");
        return 1;
    }


    int num_of_records = 0;
    int buffer_size = 100;
    char line_buffer[buffer_size];

    // Create array of records
    FITNESS_DATA data[300];

    while (fgets(line_buffer, buffer_size, file) != NULL)
    {
        // Split record
        char date[11];
        char time[6];
        char steps[10];
        tokeniseRecord(line_buffer, ",", date, time, steps);

        // Copy record components into struct
        strcpy(data[num_of_records].date, date);
        strcpy(data[num_of_records].time, time);
        data[num_of_records].steps = atoi(steps);
        
        // Next record
        num_of_records++;
    }

    // Print outputs
    printf("Number of records in file: %d\n", num_of_records);
    printf("%s/%s/%d\n", data[0].date, data[0].time, data[0].steps);
    printf("%s/%s/%d\n", data[1].date, data[1].time, data[1].steps);
    printf("%s/%s/%d\n", data[2].date, data[2].time, data[2].steps);

    // Close file
    fclose(file);
}