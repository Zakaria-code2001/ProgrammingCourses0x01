#include <stdio.h>
#include <stdlib.h>
 int main ()
 {
    int grade;
    printf("Enter your grade : ");
    scanf("%d", &grade);
    if (grade>=80)
    printf("Excellent Job!\n");
    else if (grade>=60)
    printf("Average\n");
    else printf("Try again idiot\n");
    return 0;
 }