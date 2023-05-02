#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1 , num2 ;
    printf("Enter the first Value : ");
    scanf("%d", &num1);
    printf("Enter the second Value : ");
    scanf("%d", &num2);
    if (num1>=num2)
    printf("Max num is %d\n",num1);
    else printf("Max num is %d\n",num2);
    return 0;
}