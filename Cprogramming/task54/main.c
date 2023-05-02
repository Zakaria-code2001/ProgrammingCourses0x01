#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () 
{
 int num ,result,i;
 printf("Enter Your Integer Number :  ");
 scanf("%d", &num);
 for ( i = 1; i <= num ; i++)
 {
    result=i+i;
    printf(" %d  ",result);
 }
 


 
return 0;

}