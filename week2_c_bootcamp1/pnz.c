#include <stdio.h>

int main(){

    int num;
    printf("Enter num: ");
    scanf("%d", &num);

    if(num>0)
    {
        printf("Positive\n");
    }
    else if(num<0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("zero\n");
    }
    
}