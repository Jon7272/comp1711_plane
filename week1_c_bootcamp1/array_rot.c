#include <stdio.h>

int main(){

    int array[5] = {1, 2, 3, 4, 5};
    int temp = array[4];

    for(int i=4; i>=0; i--)
    {
        if(i==0)
        {
            array[i] = temp;
        }
        else
        {
            array[i] = array[i-1];
        }
    }
    for(int j=0; j<5; j++)
    {
        printf("%d ", array[j]);
    }
}