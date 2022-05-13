#include <stdio.h>

void exchange(int * a, int * b);

int main(int argc, char const *argv[])
{
    int a,b;

    printf("please, introduce two values:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("the value of a and b before exchange: %d and %d\n", a,b);
    exchange(&a,&b);
    printf("the value of a and b after exchange: %d and %d\n", a,b);


    return 0;
}

void exchange(int * a, int * b){

    int tmp = *a;
    *a = *b;
    *b = tmp;

}