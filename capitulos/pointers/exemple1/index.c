#include <stdio.h>

/*  
    Program to show a address and content of pointer 
    that is pointing to different variables during the program
*/
int main()
{
    int a = 5;
    int b = 6;
    int d = 7;
    int vetor[3] = {1,2,3};
    int * ptr = NULL;

    ptr = &a;
    printf("%d\n",a);
    printf("%d\n",*ptr);
    printf("%p\n",(int*)ptr);

    ptr = &b;
    printf("%d\n",b);
    printf("%d\n",*ptr);
    printf("%p\n",(int*)ptr);

    ptr = &d;
    printf("%d\n",d);
    printf("%d\n",*ptr);
    printf("%p\n",(int*)ptr);

 
    return 0;
}
