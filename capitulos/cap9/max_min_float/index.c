#include <stdio.h>

#define NUM 5
//description of functions or procedures
void setMinMax(float * v, int n, float * max, float *min);

int main(int argc, char const *argv[])
{
    float v[NUM] = {12.2,9.3,10.0,49.2,23.3};
    float max,min;

    setMinMax(v,NUM,&max,&min);

    printf("the max number is: %lf \nthe min number is: %lf\n", max,min);
    
    return 0;
}

//function to set the max and min number in float vector
void setMinMax(float * v, int n, float * max, float * min){

    *max = *min = *v;
    for(int i = 0; i < n; i++)
    {
       if (v[i] > *max) (*max = v[i]);
       if (v[i] < *min) (*min = v[i]);

    }
    

}