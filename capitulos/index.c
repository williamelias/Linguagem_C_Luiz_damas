#include<stdio.h>
#include<stdlib.h>

int main(){

    int input;
    scanf("%d",&input);
    int v[input];

    for(int i=0; i<input; i++){
        scanf("%d",&v[i]);
    }

    int count = v[0];

    for (int j = 0; j < input; j++)
    {
        if(j == 0){
            printf("%d ",v[j]);
        }
        else {
            count += v[j];
            printf("%d ",count);

        }
    }

    printf("\n");

    for (int k = 0; k < input; k++)
    {
       printf("%d ",v[k]);
    }
    

    return 0;

}