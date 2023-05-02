#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int days,i,j ;
    double OneCent=0.1;
    float Result=2;
    printf("Enter th the amount of days to see how much money you got => ");
    scanf("%d", &days);
    for ( i = 1; i <= days; i++)
    {
        printf("The amount you will have in %d days is %.2lf \n",days,OneCent);
         OneCent=OneCent*Result; 
    }
    printf("The amount you will have in %d days is %.2lf \n",days,OneCent);
    return 0;
}