//nesse código teremos a explanação de caracteres e inteiros equivalentes
#include <stdio.h>

int main (){
	int number,i;
	for (i = 0; i < 255; ++i)
	{
		printf("%3d=%c\n",i,(char)i);
	}
}