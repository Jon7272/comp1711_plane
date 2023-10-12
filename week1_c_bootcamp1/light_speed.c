#include <stdio.h>

int main(){

    unsigned long days;

    printf("Enter number of days: ");
    scanf("%ld", &days);

    unsigned long distance = (days * 24 * 3600 * 300000000);

    printf("%ld\n", distance);
}