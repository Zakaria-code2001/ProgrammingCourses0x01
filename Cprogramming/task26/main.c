#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//p= pow (n ,e);
int main ()
{
    int num,esponente,potenza2,potenza4,potenza6,potenza8;
    printf("Enter the Number for ^2 : ");
    scanf("%d", &num);
    potenza2=pow(num,2);
    potenza4=pow(num,4);
    potenza6=pow(num,6);
    potenza8=pow(num,8);
    printf("Your number elveted on 2 is :%d\nYour number elveted on 4 is :%d\nYour number elveted on 6 is :%d\nYour number elveted on 8 is :%d\n",potenza2, potenza4, potenza6,  potenza8);
    return 0;

}
