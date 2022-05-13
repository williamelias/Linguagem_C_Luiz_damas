#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Introduza um número inteiro:");

    while(scanf("%d",&n)==0)
        fflush(stdin);
    
    printf("valor do inteiro:%d",n);    
    return 0;
}
