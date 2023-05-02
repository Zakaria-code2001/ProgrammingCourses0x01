#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float an,d,a1;
    int n;
    double Sn;
    printf("Enter the value of 'an' : ");
    scanf("%f", &an);
    printf("Enter the value of 'd' : ");
    scanf("%f", &d);
    printf("Enter the value of 'a1' : ");
    scanf("%f", &a1);
    printf("Enter the value of 'n' : ");
    scanf("%d", &n);
    Sn=(a1+an)*n/2;
    printf("The Sum of the sequence is %.2lf \n", Sn);
    return 0;

}