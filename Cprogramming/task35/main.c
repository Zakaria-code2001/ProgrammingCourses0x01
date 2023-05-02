#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int value;
    printf("Enter the Value : ");
    scanf("%d", &value);

    if (value<0)
    {
        printf("the absolute value is %d \n", value*(-1));
    }
    else 
    {
        printf("the absolute value is %d \n", value );
    }

}