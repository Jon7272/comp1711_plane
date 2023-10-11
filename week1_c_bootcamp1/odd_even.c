#include <stdio.h>

int main(){

    float num;
    
    printf("Please enter a number: ");
    scanf("%f", &num);

    int first_digit = num;

    
    
    if (num / 2 == first_digit / 2)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}