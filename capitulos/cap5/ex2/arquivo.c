#include <stdio.h>

int linha1();

int linha1(int i){
	int j;
	for (j=1;j<=i ; ++j)
	{
		putchar('*');
	}
		putchar('\n');
}
int main(){
	linha1(3);
	linha1(4);
	linha1(7);
	linha1(4);
	linha1(3);

	return 0;
}