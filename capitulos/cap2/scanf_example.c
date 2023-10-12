#include <stdio.h>

int main(){
    long int i;
    short int j;
    unsigned short int idade;
    
    scanf("%d %d",&i,&j);
    printf("os valores inseridos foram %d e %d\n",i,j);
    printf("%d\n",sizeof(i));
    return 0;
}