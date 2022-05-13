#include <stdio.h>
//Program to get a factorial for a number without recursion

//Description of function
void factorial_1(int n);

int main(int argc, char const *argv[])
{
    long int n;

    printf("Please insert a number:\n");
    
    //while the input is a number, the function runing
    while(scanf("%ld",&n))
        factorial_1(n);
    

    return 0;
}

//Factorial method
void factorial_1(int n){

    long int total = 1;

    for(int i = 1; i <=n; i++)
    {
        total *= i; // total = total * i;
    }
    
    printf("the factorial of %d is %ld\n", n, total);
}