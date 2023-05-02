 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

int main()
{
    float num1,num2 ;
    printf("Enter a number : ");
    scanf("%f", &num1);
    printf("Enter a number : ");
    scanf("%f", &num2);
    if (num1>num2)
       printf("the maximum number is %f\n The minimum number is %f\n", num1,num2);
    else   printf("the maximum number is %f\n The minimum number is %f\n", num2,num1);
    return 0;
}
