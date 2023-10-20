#include <stdio.h>

float fahr_to_celcius(float fahr)
{
    return (fahr-32)/1.8;
}

float fahr_to_kelvin(float fahr)
{
    return fahr_to_celcius(fahr) + 273.15;
}

float fahr_to_newton(float fahr)
{
    return (fahr-32) * (11/60);
}

int main(){

    float fahrenheit;
    char choice;

    printf("Enter fahrenheit: ");
    scanf("%f", &fahrenheit);
    

    printf ("\n");
    printf ("Select A to convert to Celsius\n");
    printf ("Select B to convert to Kelvin\n");
    printf ("Select C to convert to Newton\n");
    printf ("Select Q to quit\n");

    scanf(" %c", &choice);

    switch(choice)
    {
        case 'A': printf("%f", fahr_to_celcius(fahrenheit));
        break;

        case 'B': printf("%f", fahr_to_kelvin(fahrenheit));
        break;

        case 'C': printf("%f", fahr_to_newton(fahrenheit));
        break;

        case 'Q': break;

        
    }
}