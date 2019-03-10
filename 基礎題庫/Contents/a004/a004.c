#include<stdio.h>

int main()
{
  int year;
  while(scanf("%d",&year)!=EOF)
  {	
    _Bool IsLeapYear = (year%400 == 0 || (year%4 == 0 && year%100 !=0));
    if(IsLeapYear) 
      printf("閏年\n",year);
    else
      printf("平年\n",year);
  }
  return 0;
}
