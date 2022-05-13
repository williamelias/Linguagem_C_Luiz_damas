#include <stdio.h>

//Progam to get a factorial number with recursion

//description of functions
long int factorial_2(int n);

int main(int argc, char const *argv[])
{
    long int n;

    printf("please, insert a number:\n");
    while(scanf("%ld",&n))
        printf("The factorial of number is: %ld\n",factorial_2(n));
    
    return 0;
}

//procedure factorial
long int factorial_2(int n){

    long int total = 1;

    if (n == 1)
        return 1;
    
    total *= n;
    total *= factorial_2(n-1);
    return total;
}
