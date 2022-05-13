#include <stdio.h>

#define DIM 3
//atribuirá um vazio a cada célula
int main(){
	char velha [DIM] [DIM]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	int i,j;

	velha [0] [0]='X';
	velha [1] [1]='X';
	velha [2] [2]='0';
	velha [0] [2]='0';

	puts("Jogo da Velha teste:");

	for (i = 0; i < DIM; i++)
	{
		for (j = 0; j < DIM; j++)
		{
			printf("%c %c ",velha [i] [j],j==DIM-1?' ':'|' );
		}
		if (i!=DIM-1)

			printf("\n-----------\n");
	}
	putchar('\n');
	return 0;
}