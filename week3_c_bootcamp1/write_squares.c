#include <stdio.h>
#include "utils.h"

int main(){
    char filename[] = "sqaures.txt";
    FILE *file = open_file(filename, "w");

    int n;
    printf("How many squares: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        fprintf(file, "%d\n", i*i);
    }
    fclose(file);
    return 0;
}