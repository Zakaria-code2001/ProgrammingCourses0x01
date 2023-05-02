#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () 
{
 int num,i,j;
 int result=0;
 printf("Please Enter your Number : ");
 scanf("%d", &num);
 for ( i =1; i <= num; i++)
 {

    result=i+result;
   
 }
 printf("%d \n",result);
 
 
return 0;

}