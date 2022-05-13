#include <stdio.h>

//Program to show a lenght of string

//Statement of method that get a lenght of string
int strlen(char * s);

int main(int argc, char const *argv[])
{
    char s[100];

    printf("Please, introduce the string:");
    scanf(" %s",s);
    printf("%d",strlen(s));
    
    return 0;
}

//Description of method
int strlen(char * s){

    char * ptr = s; /*Pointer that points to first element of string*/

    while(*ptr != '\0' && *ptr !='\n'){ //While do not arrive at the end
        ptr ++;            //we increased + 1
    }
    
    return (int )(ptr - s);
}
