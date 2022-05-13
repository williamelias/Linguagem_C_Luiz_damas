#include <stdio.h>
int main(){
	int i,j;
	scanf("%d",&j);
	for (i=1;i<=j;i++,j--)
	{
		printf("%d %d\n",i,j );
	}
	return 0;
}