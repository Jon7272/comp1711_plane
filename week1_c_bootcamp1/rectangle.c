#include <stdio.h>

int main(){
    float side1;
    float side2;

    printf("Enter length:");
    scanf("%f", &side1);

    printf("Enter width:");
    scanf("%f", &side2);

    float area = side1 * side2;

    printf("Area is %f\n", area);

    return 0;
}