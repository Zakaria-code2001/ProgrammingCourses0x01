#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int star;
    int i=1;
    printf("Enter the numbers of astherics you want : ");
    scanf("%d", &star);
    while ( i <= star )
    {
        printf("* \n");
        i = i +1;

    }
    
return 0;

}