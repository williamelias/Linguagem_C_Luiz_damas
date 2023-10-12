#include <stdio.h>

int main(int argc, char const *argv[])
{
    short int age ;
    printf("insira a sua idade:");
    scanf("%d", &age);

    // example of if and else conditionals
    if (age >= 18)
        printf("você já é de maior\n");
    
    else
        printf("você não é de maior não em.\n");

    char gender;

    printf("insira seu sexo:");
    
    scanf(" %c",&gender);
    
    //example of switch case with break and default
    switch (gender)
    {
    case 'm':
        printf("mulher...\n");
        break;
    
    case 'f':
        printf("homem...\n");
        break;
    default:
        printf("Nenhuma opção encontrada\n");
        break;
    }

    return 0;
}
