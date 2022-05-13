#include <stdio.h>
#include <stdlib.h>

char *strcp(char *o, char *d)
{
    int i = 0;
    while (d[i] = o[i])
        i++;
    return d;
}

int main()
{

    char *s1;
    char *s2 = malloc(sizeof(char));

    s1 = "amovcfldajslfadjfkadjflfjadwfjas";

    strcp(s1, s2);
    printf("%s\n", s2);

    free(s2);
    return 0;
}