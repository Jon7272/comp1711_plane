#include <stdio.h>

int main(){

    int choice;

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: printf("Burger"); break;

        case 2: printf("Fish"); break;

        case 3: printf("Chicken"); break;

        case 4: printf("Steak"); break;

        case 5: printf("Chips"); break;

        default: printf("Invalid choice");
    }

}