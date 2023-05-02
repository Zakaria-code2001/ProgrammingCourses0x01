#include <stdio.h>

int main ()
{
    double num,pow,result = 1;
    int i;
    
    printf("Enter a Number : ");
    scanf("%lf", &num);
    printf("Enter the power :");
    scanf("%lf", &pow);
    
    for ( i = 1; i <= pow; i++)
    {
        result = result * num;
    }
    
    
    printf("%.2lf\n", result);
    return 0;
}