#include <stdio.h>
#include <stdlib.h>
int main () 
{
 int num;
 int i,j ;
 int result=1;
 printf("Please Enter your Number : ");
 scanf("%d", &num);
 for ( i =1; i <= num; i++)
 {
    printf("%d",result);
    result = result+1;       
 }
 printf("\n");
 for ( j = 1 ; j < i; j++)
    {
      printf("%d", num);
      num= num -1;
    }

 
 
return 0;

}