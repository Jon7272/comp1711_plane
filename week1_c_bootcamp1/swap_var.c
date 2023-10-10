#include <stdio.h>

int main(){

    int var1 = 5;
    int var2 = 3;
    int temp;

    temp = var1;
    var1 = var2;
    var2 = temp;

    printf("%d\n", var1);
    printf("%d\n", var2);

    return 0;

}