#include <stdio.h>
/*
    Program to show two functions differents to see all elements for vector
*/
void inverseString(char * s);
void invert2(char * s);

int main(int argc, char const *argv[])
{
    char s[100];

    scanf("%s",s);

    inverseString(s);
    invert2(s);

    return 0;
}

//method 1
void inverseString(char * s){

    char * ptr = s;

    while(*ptr != '\0'){
        printf("%c",*ptr);

        ptr ++;
    }

    printf("\n");

    while(ptr >= s){
        printf("%c", *ptr);

        ptr --;
    }

    printf("\n");
    
    
}

//method 2
void invert2(char * s){

    char * ptr = s;

    while(*ptr != '\0'){
        putchar(*ptr++);
    }

    printf("\n");

    while(ptr >= s){
        putchar(*ptr --);
    }
    
    

}
