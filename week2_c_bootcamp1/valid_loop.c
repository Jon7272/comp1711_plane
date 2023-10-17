#include <stdio.h>

int main(){

    int num = 10;

    while (num != -1)
    {
        printf("Enter num: ");
        scanf("%d", &num);
        if (num == -1)
        {
            printf("Terminating.\n");
        }
        else
        {
            if (num > 0 && num < 100)
            {
                printf("Valid\n");
            }
            else{
                printf("Invalid\n");
            }
        }
    }
}