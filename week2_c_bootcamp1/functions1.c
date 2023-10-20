#include <stdio.h>

int sum(int a, int b){

    int answer = a + b;
    return answer;
}

int main(){

    int z = sum(5, 2);
    printf("%d\n", z);

}