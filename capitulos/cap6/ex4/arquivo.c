#include <stdio.h>
 int main()
{
	int pagamentos[12],i,total=0;

	for (i=1;i<=12;i++){
		scanf("%d",&pagamentos[i]);
		total+=pagamentos[i];
	}
	printf("Mês		Valor\n");
	for (int i = 1; i <=12; ++i)
	{
		printf("%d		%d\n",i,pagamentos[i]);
	}
	
	printf("O total é:%d\n",total);
	return 0;
}