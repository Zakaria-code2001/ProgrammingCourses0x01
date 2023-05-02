#include <stdio.h>
#include <stdlib.h>
int main()
{
    int S,D,T;
    float SpeedInMinutes, RemainingMinutes;
    printf("Enter the value of the Speed : ");
    scanf("%d", &S);
    printf("Enter the value of the Distance : ");
    scanf("%d", &D);
    T=D/S;
    SpeedInMinutes=S/60.0;
    RemainingMinutes=(D%S) / SpeedInMinutes;
    printf("it Will take the car To reach city B from city A %d hours and %.2f minutes \n",T,RemainingMinutes);
    return 0;
}