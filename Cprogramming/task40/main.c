#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int day,month,year;
  printf("Enter day : ");
  scanf("%d", &day);
  printf("Enter month : ");
  scanf("%d", &month);
  printf("Enter year: ");
  scanf("%d", &year);
  printf("The day is  0x%X \n The month  is 0x%X \n The year is 0x%X \n", day,month,year );
  return 0;
}
