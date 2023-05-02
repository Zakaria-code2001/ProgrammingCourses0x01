#include <stdio.h>
#include <stdlib.h>
int main ()
{
  float data,decimalpart;
  printf("Enter the data : ");
  scanf("%f", &data);
  decimalpart=data-(int)data;
  printf("the decimal part of %f is %.2f", data,decimalpart);
  return 0;

  
}