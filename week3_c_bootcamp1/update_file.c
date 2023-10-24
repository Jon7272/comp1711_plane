#include <stdio.h>
#include <stdlib.h>

int main(){

    char filename[] = "numbers.dat";
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("");
        return 1;
    }

    float sum;
    float i=0;
    char line_buffer[100];
    while (fgets(line_buffer, 100, file) != NULL)
    {
        sum = sum + atof(line_buffer);
        printf("%f", sum);
        i++;
    }
    fclose(file);
    FILE *file2 = fopen(filename, "a");
    if (file == NULL)
    {
        perror("");
        return 1;
    }

    fprintf(file2, "\n %f", sum / i);
    fclose(file2);

}