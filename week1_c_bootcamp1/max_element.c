#include <stdio.h>

int main(){

    int array[5] = {6, 8, 11, 3, 5};

    int biggest = 0;

    for(int i=0; i<5; i++)
    {
        if(biggest < array[i])
        {
            biggest = array[i];
        }
    }

    printf("%d\n", biggest);
}