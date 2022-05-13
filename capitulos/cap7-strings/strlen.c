#include <stdio.h>
#include <stdlib.h>

int strlen(char *s){
    int count = 0;
    for(; *s != '\0'; s++ ){
        count += 1;
    }
    return count;
}

int strlen2(char *s){
    int i = 0;
    while (*s !='\0')
        i+=1;
    return i;
    
}

int main(){

    char s1[50];
    scanf("%s",s1);

    printf("%d",strlen(s1));

    return 0;

}