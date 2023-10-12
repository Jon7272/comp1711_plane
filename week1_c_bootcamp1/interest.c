#include <stdio.h>

int main(){

    float start;
    float rate;
    int time;

    printf("Enter starting amount: ");
    scanf("%f", &start);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%d", &time);

    for(int i=0;i<time;i++)
    {
        start = start * rate;
    }

    printf("Final amount: £%f\n", start);
}