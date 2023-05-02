#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1,rest;
    printf("Enter the first Value : ");
    scanf("%d", &num1);
    rest=num1%2;
    if (rest==0)
    printf("The number %d is even \n",num1);
    else printf("The number %d is odd\n",num1);
    return 0;
}