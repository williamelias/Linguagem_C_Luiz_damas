#include <stdio.h>
#define NUM_STRINGS 3
#define MAX_COL 10
//Program to see all data for string vector 

void scrollString();

int main(int argc, char const *argv[])
{
    char s[NUM_STRINGS][MAX_COL] = {
        {"amor"},
        {"arroz"},
        {"ateu"}
    };
    char (*ptr)[10] = s;
    char * p = NULL;

    while(ptr - s < NUM_STRINGS){
        p = *ptr;
        while(*p){
            printf("%c",*p++);
        }
        putchar("\n");

        ptr ++;
    }
    
    
    return 0;
}

