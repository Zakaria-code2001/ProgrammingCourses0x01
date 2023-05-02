#include <stdio.h>
#include <stdlib.h>
int main ()
{
    double Temperature;
    double Fahrenheit;
    double Celius;
    printf("Enter the Temperature in  Celius  : ");
    scanf("%lf",&Temperature);
    printf("Enter the Temperature in Fahrenheit : ");
    scanf("%lf",& Fahrenheit);
    Fahrenheit= Temperature*1.8+32;
    Celius= (Fahrenheit-32)/1.8;
    printf("Tthe Temperature in is Fahrenheit %lf\n",  Fahrenheit);
    printf("Tthe Temperature in is Fahrenheit %lf\n",   Celius);
    return 0;
}