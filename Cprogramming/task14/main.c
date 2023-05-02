#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int Grade1, Grade2, Grade3;
    double AverageValue;
    printf("Enter Grade1:");
    scanf("%d",&Grade1);
    printf("Enter Grade2:");
    scanf("%d",&Grade2);
    printf("Enter Grade3:");
    scanf("%d",&Grade3);
    AverageValue= ((double)Grade1+Grade2+Grade3)/3;
    printf("The Averege value is %lf\n", AverageValue);
    return 0;
}