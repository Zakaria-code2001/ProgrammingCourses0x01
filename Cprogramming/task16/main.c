#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float z=10.34;
    float x=20.34;
    float temp;
    printf("z=%f\n", z);
    printf("x=%f\n", x);
    temp=z;
    z=x;
    x=temp;
    printf("z=%f\n",z);
    printf("x=%f\n",x);
    return 0;
}
