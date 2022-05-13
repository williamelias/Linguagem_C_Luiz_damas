#include <stdio.h>

 int linha1(int i,char car){
	int j;
	for (j=1;j<=i ; ++j)
	{
		putchar(car);;
	}
		putchar('\n');
}
int main(){
	linha1(3,'*');
	linha1(4,'-');
	linha1(7,'t');
	linha1(4,'-');
	linha1(3,'*');

	return 0;
}