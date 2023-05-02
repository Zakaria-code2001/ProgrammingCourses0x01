#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float AreaOfArectangle (float Height,float Width) 
{
 float Area;
 Area=Width*(float)Height;
 return Area;

}
int main ()
{
    float H,W;
    printf("Enter the Height  : ");
    scanf("%f", &H);
    printf("Enter the Widht : ");
    scanf("%f", &W);
    Area=AreaOfArectangle(W,H);
    printf("the Area is Equal to %.2f \n",AreaOfArectangle (H,W));
    return  0;
}