#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int num,units,tens,hundreds,SumOfDigits;

  printf("Enter the 3 digit number : ");
  scanf("%d", &num);

  units=num%10;
  tens= (num/10)%10;
  hundreds= num/100;
  SumOfDigits=units+tens+hundreds;
  printf("the sum of digits is %d\n", SumOfDigits);
  return 0;

  
}