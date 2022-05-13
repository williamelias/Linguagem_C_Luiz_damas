#include <stdio.h>
int main(){
	int number,j,i=1;
	scanf("%d",&number);
	for (j=number;i<=number; j--,i++)
	{
		printf("%d	%d\n",i,j );
	}
}