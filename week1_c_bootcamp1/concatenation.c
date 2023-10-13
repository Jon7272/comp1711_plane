#include <stdio.h>

int main(){

    int array1[3] = {1, 2, 3};
    int array2[3] = {4, 5, 6};
    int array3[6];

    for(int i=0; i<3; i++)
    {
        array3[i] = array1[i];
    }
    for(int j=0; j<3; j++)
    {
        array3[j+3] = array2[j];
    }
    for(int k=0; k<6; k++)
    {
        printf("%d ", array3[k]);
    }
}