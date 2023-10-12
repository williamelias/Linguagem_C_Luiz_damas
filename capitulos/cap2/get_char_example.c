#include <stdio.h>

void showAlphabetInIntFormat(){

    for (int i = 0; i <= 254; i++){
        printf("%3d - %c\n", i,(char)i);
    }
}

int main(int argc, char const *argv[])
{
    // char ch;

    // printf("Introduza um caractere:");
    // ch = getchar();

    showAlphabetInIntFormat();

    return 0;
}
