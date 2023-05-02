#include <stdio.h>
#include <stdlib.h>

int main ()
{
char Mychar;
printf("Eneter Your Value : ");
scanf("%c",&Mychar);


if ( Mychar>='A' && Mychar <='Z' )
printf("Upper case letter \n ");
else if (Mychar>='a' && Mychar <='z')
printf("Lower case letter \n ");
else if (Mychar>='0' && Mychar <='9')
printf("Digit \n ");
else printf(" Other \n ");

return 0;
}