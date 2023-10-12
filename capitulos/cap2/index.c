#include <stdio.h>

/*
*Os tipos de dados básicos na linguagem C são float,double, int,char
*Os tamanhos de espaço de cada uma é
*- float: 4 bytes
*- double: 8 bytes
*- int: 4 bytes
*- char: 1 byte
*/

int main(int argc, char const *argv[])
{
    const float PI = 3.14; //declaração e atribuição de variável
    float kilos = 1.0E3;
    double gramas = 1.0e6;
    double toneladas; // declaração de variável

    printf("%lf\n",toneladas);// o compilador reserva o espaco para a variável e atribui o valor aleatório para a mesma

    printf("insira a qunatidade em toneladas:");scanf("%lf",&toneladas);

    printf("a quantidade %.0lf em kilos é %e e em gramas é %E\n",toneladas,toneladas*kilos,\
    toneladas*gramas);

    return 0;
}
