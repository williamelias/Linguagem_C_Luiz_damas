#include <stdio.h>

//Program to show a function that copy a data string for another string

char * strcp(char *org, char * dest);

int main(int argc, char const *argv[])
{
    char s[100];
    char f[100];
    char * ptr = NULL;
    scanf("%s", s);

    ptr = strcp(s,f);

    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr ++;
    }
    

    return 0;
}

//method to copy and past a string for another address of memory
char * strcp(char *org, char * dest){

    char * tmp = dest;
    while(*dest++ = *org++);

    return tmp;
    
}

