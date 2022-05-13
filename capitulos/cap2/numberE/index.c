#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    float kilos = 1.0E3;
    double gramas = 1.0e6;
    double toneladas;

    printf("insira a qunatidade em toneladas:");scanf("%lf",&toneladas);

    printf("a quantidade %.0lf em kilos é %e e em gramas é %E",toneladas,toneladas*kilos,\
    toneladas*gramas);

    return 0;
}
