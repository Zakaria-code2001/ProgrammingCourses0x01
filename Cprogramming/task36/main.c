#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{  
    int x,y;
    printf("enter Your x Coordinate : ");
    scanf("%d", &x);
    printf("enter Your y Coordinate : ");
    scanf("%d", &y);

    if (x>0 && y>0)
        printf ("the coordinate point is in the 1st Quadrant \n");
    else if (x<0 && y>0)
        printf ("the coordinate point is in the 2st Quadrant \n");
    else if (x<0 && y<0)
        printf ("the coordinate point is in the 3st Quadrant \n");
        
    else if (x>0 && y<0)
        printf ("the coordinate point is in the 4st Quadrant  \n");
    else printf("enter a coordinate number !");
        
    return 0;

}