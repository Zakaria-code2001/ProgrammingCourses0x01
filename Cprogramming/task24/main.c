#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int num,units,tens,hundreds;

  printf("Enter the 3 digit number : ");
  scanf("%d", &num);

  units=num%10;
  tens= (num/10)%10;
  hundreds= num/100;
  printf("the reverse digit is  %d%d%d\n",units,tens,hundreds);
  return 0;

  
}