#include <stdio.h>
#include <stdlib.h>
int main ()
{
   float grade;
   int i=0;
   float SommaDeiVoti=0;
   float media;
   
    while (grade!=0)
    {
        printf("Enter your grades and after your last grade enter 0 to confirm :");
        scanf("%f", &grade);
        SommaDeiVoti=SommaDeiVoti+grade;
        media=SommaDeiVoti/i;
        i++;
        

    }
   
   printf("The average grade is %.2f ",media );
    
  
    return 0;
}
