#include <stdio.h>

int soma(int a, int b){
	int sum;
	sum=a+b;
	return sum;	
}
int multiplicar(int a,int b){
	int mult;
	mult=a*b;
	return mult;
}

int main(){
	int a,b;
	puts("Insira dois números a seguir");
	scanf("%d %d",&a,&b);

	printf("%d+%d=%d e %d*%d=%d\n",a,b,soma(a,b),a,b,multiplicar(a,b) );

}