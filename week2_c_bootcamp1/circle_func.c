#include <stdio.h>

float area_of_circle(float radius)
{
    return (radius * radius) * 3.14;
}

int main(){

    float radius = 3.5;
    printf("%f\n", area_of_circle(radius));
}