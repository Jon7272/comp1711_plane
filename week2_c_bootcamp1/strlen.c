#include <stdio.h>

int str_len(char *str)
{
    int count = 0;
    
    while (str[count] != "\0")
    {
        count++;
    }

    return count;
}

int main(){

    char my_str[6] = "Hello!";
    printf("%d", str_len(my_str));
}