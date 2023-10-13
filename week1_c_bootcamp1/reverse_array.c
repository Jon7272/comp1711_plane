#include <stdio.h>

int main(){

    int orig_array[5] = {1, 2, 3, 4, 5};
    int reverse_array[5];

    int j = 4;

    for(int i=0; i<5; i++)
    {
        reverse_array[i] = orig_array[j];
        j--;
    }

    for(int k=0; k<5; k++)
    {
        printf("%d ", reverse_array[k]);
    }
}