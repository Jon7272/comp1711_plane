#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main(){

    char filename[] = "squares.txt";
    FILE *file = open_file(filename, "r");

    int buffer_size = 100;
    char buffer_line[buffer_size];
    int i = 0;
    float sum = 0;
    while (fgets(buffer_line, buffer_size, file) != NULL)
    {
        sum = sum + atoi(buffer_line);
        i++;
    }
    printf("%f\n", sum/i);
    fclose(file);

    
}