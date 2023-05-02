#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () 
{
 int num ,NumOfMoltiplications,i,result;
 printf("Enter Your Integer Number :  ");
 scanf("%d", &num);
 printf("Enter the xTime Moltiplicatio Value : ");
 scanf("%d", &NumOfMoltiplications); 
 for ( i = 1; i <= NumOfMoltiplications; i++)
 {
    printf("%d*%d=%d\n",num,i,result);
    result=num*i;
 }
 

 
return 0;

}