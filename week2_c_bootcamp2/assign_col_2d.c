#include <stdio.h>
#include <stdlib.h>

void printColumn(int a[][4], int collIndex, int rows, char when){

    switch (when){
        case 'B': printf("Values in column %d before change: \n", collIndex); break;

        case 'A': printf("Values in column %d after change: \n", collIndex); break;

        default: printf("Invalid option\n");
        return;

    }

    for (int i = 0; i < rows; i++)
    {
        printf("%d\n", a[i][collIndex]);
    }
}

void changeColumn(int a[][4], int collIndex, int rows, int newValue){

    for (int i = 0; i < rows; i++)
    {
        a[i][collIndex] = newValue;
    }
}

void printArray(int a[][4]){

    for (size_t i = 0; i <=2; i++)
    {
        for (size_t j = 0; j <=3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n"); 
        
    }
    
}

int main(){
    int arrayA[3][4];
    int arrayB[3][4];
    int arrayC[3][4];

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<4; j++)
        {
            arrayA[i][j] = rand() % 10;
            arrayB[i][j] = rand() % 10;
            arrayC[i][j] = arrayA[i][j] * arrayB[i][j];
        }
    }

    printArray(arrayC);
  

}