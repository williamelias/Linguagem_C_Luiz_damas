#include <stdio.h>

int main()

{	
	double populacao_A = 90000000, populacaoo_B = 2000000;
	int contador = 0;
	
	//calculos para satisfazer a questão

	while (populacao_A < populacaoo_B){

		populacao_A *= 0.03;
		populacaoo_B *= 0.015;

		contador +=1;

	}

	printf("O tempo necessário é:%d\n anos", contador);


	return 0;
}