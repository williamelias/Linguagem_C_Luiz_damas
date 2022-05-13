#include <stdio.h>


int main(){
    
    double pa=90000000, pb=200000000, totalA, totalB, contador=0;

    //taxa de crescimento anual do pais A 3% e do B 1,5%  pa >= pb;


    while(totalA <= totalB){
    totalA = pa*1.3;

    totalB = pb*1.015;

    contador += 1;    

    
        printf("A quantidade de anos necessários para a população do país A ultrapassar ou igualar a do País B é de: %d\n", contador);
    }
    return 0;
}