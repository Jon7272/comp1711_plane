#include <stdio.h>

int main(){

    float num;
    printf("Please enter num: ");
    scanf("%f", &num);
    int integer = num;

    if(num/5 == integer/5)
    {
        printf("num is divisble by 5\n");
    }
    else
    {
        printf("num not divisible by 5\n");
    }
    if(num/4 == integer/4)
    {
        printf("num is divisble by 4\n");
    }
    else
    {
        printf("num not divisible by 4\n");
    }
}