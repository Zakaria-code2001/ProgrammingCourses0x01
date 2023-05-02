#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () 
{
 int num ,i,sum=0;
 printf("Enter Your Integer Number :  ");
 scanf("%d", &num);
 for ( i = 1; i <= num ; i++)
 {
    if (i%3==0 && i%5==0)
    {
    sum=sum+i;
    }

}
 printf("%d\n",sum); 

 
return 0;

}