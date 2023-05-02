#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a1,d;
    int n;
    double an;
    printf("Enter the value of 'a1' : ");
    scanf("%f", & a1);
    printf("Enter the value of 'd' : ");
    scanf("%f", & d);
    printf("Enter the value of 'n' : ");
    scanf("%d", & n);        
    an=a1+(n-1)*d;
    printf("The n-th term of the sequence is %.2lf\n", an);
    return 0;
}