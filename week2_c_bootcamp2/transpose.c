#include <stdio.h>


void printArray(int a[][3], char choice){

    switch(choice){

        case 'A': 
            for (int i = 0; i <=1; i++)
            {
                for (int j = 0; j <=2; j++)
                {
                    printf("%d ", a[i][j]);
                }
                printf("\n"); 
            }
            break;

        case 'B': 
            for (int i = 0; i <=2; i++)
            {
                for (int j = 0; j <=1; j++)
                {
                    printf("%d ", a[i][j]);
                }
                printf("\n"); 
            }
            break;       
    
    }


    
}

void transposeArray(int array[2][3]){

    int temp;

    for (int i = 0; i <=2; i++)
    {
        temp = array[0][i];
        array[0][i] = array[i][0];
        array[i][0] = temp;
    }
    for (int i = 0; i <=2; i++)
    {
        temp = array[1][i];
        array[1][i] = array[i][1];
        array[i][1] = temp;
    }

}


int main(){

    int array[][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printArray(array, 'A');
    transposeArray(array);
    printArray(array, 'B');
    



    
}