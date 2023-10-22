#include <stdio.h>
#include <string.h>

char * concact_strings(const char *string1, const char *string2)
{
    int length = strlen(string1) + strlen(string2);
    char new_string[length];

    for(int i=0; i<strlen(string1); i++)
    {
        new_string[i] = string1[i];
    }
    for(int j=0; j<strlen(string2); j++)
    {
        new_string[strlen(string1)+j] = string2[j];
    }
    printf("%s\n", new_string);
    return new_string;
    
}

int main(){

    char first[4] = "Jon";
    char second[6]= "Owens";
    
    printf("%s\n", concact_strings(first, second));
}