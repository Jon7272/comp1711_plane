#include <stdio.h>

int main(){

    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);

    float area = 3.14 * (radius * radius);
    printf("Area is: %f\n", area);

    return 0;
}