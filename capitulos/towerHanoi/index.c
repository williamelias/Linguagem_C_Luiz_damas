#include <stdio.h>

//Program to show how much moves will resolve the problem of tower of hanoi
void hanoi(int N,  char first, char third, char second);
const int *ptr;
int main(int argc, char const *argv[])
{
    int N;
    int counter = 0;
    do
    {
        scanf("%d", &N);
        hanoi(N,'a','c','b');
        printf("%d\n",counter);
        counter = 0;

    } while (N != 0);
    
    
    return 0;
}

void hanoi(int N, char first, char third, char second){

    int counter = 0;

    printf("1");

    if (N ==0){
        ptr = (int*)&counter;

        return;
    }

    if (N == 1) {
        printf("3");

        counter += 1;
        hanoi(N-1,first,second,third);
    }

    else
    {
        counter += 1;

        hanoi(N-1, first, second, third);
        hanoi(N-1, second, third, first);
    }

}
