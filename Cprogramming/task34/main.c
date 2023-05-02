#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main()
{ 
    char GivenNum[20];
    int lenght;
    printf("Enter a number :  ");
    scanf("%s", &GivenNum);
    lenght=strlen(GivenNum);
    if(lenght==2)
        printf("double digit \n");
    else  if(lenght==3)
        printf("tripple digit \n");
    else printf("nor double or tripple digit \n");
   
    return 0;
}