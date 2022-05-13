#include <stdio.h>
// description of function
int strlen(char * s);

int main(int argc, char const *argv[])
{
    char s[100];
    
    printf("Write a text:\n");
    scanf("%s",s);

    printf("%d\n",strlen(s));

    return 0;
}

//this function return the lenght of string inserted with recursive method
int strlen(char * s){
    if (*s == '\0') return 0;
    
    return 1 + strlen(s+1);
};