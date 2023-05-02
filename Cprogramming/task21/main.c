#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int Seconds;
  int TotalHours,TotalMinutes,RemainingSeconds;
  printf("Enter the value of Seconds : ");
  scanf("%d", &Seconds);
  TotalHours = Seconds / 3600;
  TotalMinutes= (Seconds-3600)/60;
  RemainingSeconds=(Seconds-3600)%60;
  printf("the time is %d:%d:%d\n",TotalHours,TotalMinutes,RemainingSeconds);
  return 0;


  
}
