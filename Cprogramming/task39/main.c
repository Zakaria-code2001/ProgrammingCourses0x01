#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int day, month, year;
    printf("Enter the Date : ");
    scanf("%d%d%d", &day, &month, &year);
    switch (month)
    {
        case 1:
            if (day < 31)
                printf("%d/%d/%d\n", day+1, month, year);
            else if (day == 31)
                printf("%d/%d/%d\n", 1, month+1, year);
            break;
        case 2:
            if (day < 28 )
                printf("%d/%d/%d\n", day+1, month, year);
            else if (day <= 28 && (year % 4 == 0 || year % 400 == 0) )
                printf("%d/%d/%d\n", day+1, month, year);
            else if (day == 28)
                printf("%d/%d/%d\n", 1, month+1, year);
            break;
        case 3:
            if (day < 31)
                printf("%d/%d/%d\n", day+1, month, year);
            else if (day == 31)
                printf("%d/%d/%d\n", 1, month+1, year);
            break;
        case 4:
            if (day < 30)
                printf("%d/%d/%d\n", day+1, month, year);
            else if (day == 30)
                printf("%d/%d/%d\n", 1, month+1, year);
            break;
        case 5:
            if (day < 31)
                printf("%d/%d/%d\n", day+1, month, year);
            else if (day == 31)
                printf("%d/%d/%d\n", 1, month+1, year);
            break;
        case 6:
            if (day < 30)
                printf("%d/%d/%d\n", day+1, month, year);
            else if (day == 30)
                printf("%d/%d/%d\n", 1, month+1, year);
            break;
        case 7:
            if (day < 31)
                printf("%d/%d/%d\n", day+1, month, year);
            else if (day == 31)
                printf("%d/%d/%d\n", 1, month+1, year);
            break;
        case 8:
            if (day < 30)
                printf("%d/%d/%d\n", day+1, month, year);
            else if (day == 30)
                printf("%d/%d/%d\n", 1, month+1, year);
            break;
        case 9:
            if (day < 31)
                printf("%d/%d/%d\n", day+1, month, year);
            else if (day == 31)
                printf("%d/%d/%d\n", 1, month+1, year);
            break;
        case 10:
            if (day < 30)
                printf("%d/%d/%d\n", day+1, month, year);
            else if (day == 30)
                printf("%d/%d/%d\n", 1, month+1, year);
            break;
        case 11:
            if (day < 31)
                printf("%d/%d/%d\n", day+1, month, year);
            else if (day == 31)
                printf("%d/%d/%d\n", 1, month+1, year);
            break;
        case 12:
            if (day < 30)
                printf("%d/%d/%d\n", day+1, month, year);
            else if (day == 30)
                printf("%d/%d/%d\n", 1, 1, year+1);
            break;
        default : printf("Eroor try again");
        break;
    }
    return 0 ;
}

