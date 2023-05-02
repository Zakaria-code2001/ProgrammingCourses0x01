#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   int x,y,z;
   printf("Enter the value of 'x' : ");
   scanf("%d", &x);
   printf("Enter the value of 'y' : ");
   scanf("%d", &y);
   printf("Enter the value of 'z' : ");
   scanf("%d", &z);
   
   if (x%y== 0 || y%z == 0 || z%x ==0)
   printf("Divisible\n");
   else printf("Non-Divisible \n");
   
    return 0;
}
