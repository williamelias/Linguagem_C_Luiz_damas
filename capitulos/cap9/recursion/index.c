#include <stdio.h>

//description of functions
void factorial(int num);

int main(int argc, char const *argv[])
{
    int n;
    puts("insert a number:"); scanf("%d",&n);
    factorial(n);
    return 0;
}

//factorial
void factorial(int num){

    int total = 1;
    unsigned int i = 1;

    for( i = 1; i <= num; i++)
        total *= i;

    printf("the factorial of num %d is %d\n", num, total);   

}
