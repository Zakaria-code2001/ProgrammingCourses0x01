#include <stdio.h>

int main()
{
	int CurrentYear;
	int YourAge;
	scanf("%d", &CurrentYear);
	scanf("%d", &YourAge);
    printf("The year you were born is %d\n", CurrentYear-YourAge);
	
	return 0;
}