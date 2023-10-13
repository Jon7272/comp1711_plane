#include <stdio.h>

int main(){

    int array[6] = {3, 4, 2, 4, 1, 3};
    int dup_array[3];
    int pos = 0;

    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            if(i != j)
            {
                if(array[i] == array[j])
                {
                    dup_array[pos] = array[i];
                    pos++;
                }
            }
        }
    }
    for(int k=0; k<3; k++)
    {
        printf("%d ", dup_array[k]);
    }
}