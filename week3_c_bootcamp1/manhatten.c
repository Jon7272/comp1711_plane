#include <stdio.h>
#include <stdlib.h>
#include "point.h"


int main(){

    point points[10];

    for (int i = 0; i < 10; i++)
    {
        points[i].x = (rand() % 200) - 100;
        points[i].y = (rand() % 200) - 100;
        printf("(%d, %d)\n", points[i].x, points[i].y);
    }
    int total;
    for (int j=0; j < 10; j+=2)
    {
        total = total + ( abs(points[j].x - points[j+1].x) + abs(points[j].y - points[j+1].y) );
    }
    printf("Avergae distance = %d\n", total/5);
}
