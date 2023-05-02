#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main ()
{
    int num1,num2;
    char sign;
    float addition,substraction,moltiplication,division,rest;
    printf("Enter your sign : ");
    scanf("%s", &sign);
    printf("Enter your firts number : ");
    scanf("%d", &num1);
    printf("Enter your second number : ");
    scanf("%d", &num2);
    addition=num1+num2;
    substraction=num1-num2;
    moltiplication=num1*num2;
    division=num1/num2;
    rest=num1%num2;
    switch (sign)
    {
    case '+':
        printf("The addition  %d + %d is %.2f\n",num1,num2,addition);
        break;
    case '-':
        printf("The substraction  %d - %d is %.2f\n",num1,num2,substraction);
        break;
    case '*':
        printf("The moltiplication  %d + %d is %.2f\n",num1,num2,moltiplication);
        break;
    case '/':
        if(num2==0)
        printf("you cannot divide by 0 \n");
        else
        printf("The division %d + %d is %.2f\n",num1,num2,division);
        break;
    case '%':
        printf("The rest  %d + %d is %.2f\n",num1,num2,rest);
        break;
    
    default:
    printf("enter the right sign ! \n");
        break;
    }
  return 0;
}