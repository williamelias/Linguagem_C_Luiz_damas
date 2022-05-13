#include <stdio.h>
int main(){
	char vet[5],i;
	vet[0]='a';
	vet[1]='e';
	vet[2]='i';
	vet[3]='o';
	vet[4]='u';
	for (i= 0; i < 5; ++i)
	{
		printf("%c\n",vet[i] );
	}
}