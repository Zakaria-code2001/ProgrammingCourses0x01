#include <stdio.h>
#include <stdlib.h>
int main ()
{
   int grade;
   do
   {
    printf("Enter your grade : ");
    scanf("%d", &grade);
    if (grade!=0)
    {
      printf("you grade %d is not legit ", grade);   /* code */
    }else printf("Thanks you grade %d is legit ", grade);
    } 
    while (grade>-1 && grade<101);
   
  
    return 0;
}