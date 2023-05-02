#include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

int main()
{
    float a, b, c,max,min;
    printf("Enter the first value : ");
    scanf("%f", &a);
    printf("Enter the second value : ");
    scanf("%f", &b);
    printf("Enter the third value : ");
    scanf("%f", &c);
    max=a;
    min=a;
   if(max<b){
    max=b;
   }
    if(max<c){
    max=c;
   }
    if(min>b){
    min=b;
   }
   if(min>c){
    min=c;
   }
    printf("the maximum number is %f\n", max);
    printf("the minimum number is %f\n", min);
    return 0;
}