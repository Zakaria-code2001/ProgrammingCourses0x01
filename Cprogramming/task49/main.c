#include <stdio.h>
int main ()
{
   int num,result,j;
   int i;
   result=0;
   printf("Enter the number of times :");
   scanf("%d", &num);
   for (i = 0; i <= num; ++i) {
      for (j = 0; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
    return 0;
}