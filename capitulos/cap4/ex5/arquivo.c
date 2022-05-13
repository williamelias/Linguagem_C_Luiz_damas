#include <stdio.h>
int main(){
	int number,i;
	scanf("%d",&number);
	for (i=number;;i++)//laço infinito
	{
		if (i%10==0)
		{
			break;
		}
		else if (i%3==0)
		{
			continue;
		}
		printf("%d\n",i );
	}
	return 0;
}