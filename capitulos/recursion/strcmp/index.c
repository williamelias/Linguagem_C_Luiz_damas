#include <stdio.h>

//description
int strcmp(char * s1, char * s2);
void verifyReturnstrcmp(int value);
int main(int argc, char const *argv[])
{
    char s1[100];
    char s2[100];

    fflush(stdin);

    printf("Please insert the first string:\n");
    scanf("%s",s1);
    printf("Now isert the second:\n");
    scanf("%s",s2);
    printf("%d\n",strcmp(s1,s2));
    return 0;
}

/*
    this function compare two string and 
        - return 0 if the strings is equals
        - return a negative value if the second string is less than first
        - return a positive value if the first string is less than second
*/
int strcmp(char * s1, char * s2){
    if (*s1 == '\0' || s2[0] == '\0' || *s1 != *s2 ) {
        return *s1 - *s2;
    }
    else
    {
        return strcmp(s1++, s2++);
    }
    
    
}

