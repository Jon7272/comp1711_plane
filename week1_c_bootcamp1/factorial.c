#include <stdio.h>

int main(){

    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int count = num;

    while(count != 1)
    {
        count = count - 1;
        num = num * count;
    }
    printf("%d\n",num);

}