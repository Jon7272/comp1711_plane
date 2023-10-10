#include <stdio.h>

int main(){
    float a;
    float b;

    printf("Enter num1: ");
    scanf("%f", &a);

    printf("Enter num2: ");
    scanf("%f", &b);

    float c = a + b;
    printf("The sum is: %f\n", c);

    return 0;

}