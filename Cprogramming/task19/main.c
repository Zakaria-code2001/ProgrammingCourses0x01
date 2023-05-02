#include <stdio.h>
#include <stdlib.h>
int main ()
{
int HourlyPayment ;
float Salary,TotalHoursWorked;
printf(" Enteter your Hourly Payment : ");
scanf("%d", &HourlyPayment);
printf(" Enteter your TotalHoursWorked : ");
scanf("%f", &TotalHoursWorked);

Salary=HourlyPayment*TotalHoursWorked;
printf("Your monthly Salary is %.2f\n", Salary);
return 0;

}