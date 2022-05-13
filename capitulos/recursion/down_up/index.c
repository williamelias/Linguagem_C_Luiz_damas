#include <stdio.h>
// program to show functions of down and up a list of numbers

//descriptions of procedures
void up(int n);
void down(int n);

int main(int argc, char const *argv[])
{

    int n;

    printf("please,insert a number:\n");
    while(scanf("%d",&n)){
        up(n);
        printf("\n");
        down(n);
    }
    
    
    return 0;
}

//up function
void up(int n){
    if(n < 1) return;
    up(n-1);
    printf("%d",n);

}

//down function
void down(int n){
    if (n < 1) return;
    printf("%d",n);
    down(n-1);

}
