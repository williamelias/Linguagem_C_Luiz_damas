#include <stdio.h>
#include <string.h>

/*Program to implement a strchar function for string.h library*/

char * strchar2(char ch, char * word);
int main(int argc, char const *argv[])
{

    char s[100],ch;

    char * ptr = NULL;
    printf("Introduza uma palavra:\n");scanf("%s", s);
    printf("Introduza um caracter:\n");scanf(" %c", &ch);

    puts(strchar2(ch, s));
    puts(strchr(s,ch));
    return 0;
}

/*function to return a first occurrence for char*/
char *strchar2(char ch, char * word){
    
    while(*word != '\0'){
       if (*word == ch) {
           return word;
       }
       else{
        word ++;       
       }
    }

    return NULL;
}
