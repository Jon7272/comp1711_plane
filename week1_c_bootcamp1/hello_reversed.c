#include <stdio.h>

int main(){

    char mystring[6] = "Hello";
    
    for(int i=6; i>=0; i--)
    {
        printf("%c", mystring[i]);
    }
}