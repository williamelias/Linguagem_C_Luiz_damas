#include <stdio.h>
int main(){
	int number;
	scanf("%d",&number);
	while(number%10!=0){
		if (number%3!=0)
		{
			printf("%d\n",number);
		}
		number++;
	}
}