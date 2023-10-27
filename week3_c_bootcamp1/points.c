#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    float x;
    float y;
} point;

int main(){

    point points[] = {};

    for (int i = 0; i < 10; i++)
    {
        points[i].x = rand();
        points[i].y = rand();
        printf("(%f, %f)\n", points[i].x, points[i].y);
    }
}
