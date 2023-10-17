#include <stdio.h>

int main(){

    int temp;
    printf("Enter temp: ");
    scanf("%d", &temp);

    if(-10<temp && temp <40)
    {
        printf("Valid\n");
    }
    else
    {
        printf("Not valid\n");
    }
}