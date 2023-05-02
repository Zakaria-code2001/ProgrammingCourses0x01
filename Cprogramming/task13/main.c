#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height;
    float width;
    scanf("%f", &height);
    scanf("%f", &width);
    printf("The Perimeter of the given rectangle is %F \n", (height + width)*2);
    return 0;
}