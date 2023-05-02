#include <stdio.h>

int main ()
{
    double num,pow,result = 1;
    int i = 1;
    
    printf("Enter a Number : ");
    scanf("%lf", &num);
    printf("Enter the power :");
    scanf("%lf", &pow);
    
    while (i <= pow)
    {
        result = result * num;
        i++;
    }
    
    printf("%.2lf\n", result);
    return 0;
}
