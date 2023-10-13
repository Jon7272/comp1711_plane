#include <stdio.h>

int main(){

    int num_array[5] = {5, 6, 2, 3, 4};

    int total = 0;

    for(int i=0; i<5; i++)
    {
        total = total + num_array[i];
    }

    printf("%d\n", total);
}