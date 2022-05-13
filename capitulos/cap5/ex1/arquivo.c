#include <stdio.h>
int func();
int oneafive();
int func(){
	int i=1;
	for (;i<=19; ++i)
	{
		putchar('*');
	}
	putchar('\n');
}
int oneafive(){
	int i=1;
	while(i<=5)
	{
	printf("%d\n",i);
	i++;
	}
}
int main(){
	int i;
	func();
	puts("Números de 1 a 5");
	func();
	oneafive(); 
	func();

return 0;
}