#include <stdio.h>
#include <stdlib.h>

//description of funcions/procedures
void sum1(int argc, char argv[]);
void sum2(int argc, char argv[]);

int main(int argc, char const *argv[])
{
    int i=1, total = 0;

    for(i; i < argc; i++)
        total+= atoi(argv[i]);
    printf("the sum of numbers:%d\n", total);


    for(total = 0; *argv != '\0'; argv++)
        total+= atoi(*argv);
    printf("the sum of numbers:%d\n", total);

    return 0;   
}
