#include<stdio.h>

int main(void)
{
  int month,day,lucky;
  while(scanf("%d %d",&month,&day) != EOF)
  {
  lucky = (month*2+day)%3;
  if(lucky == 2)
  printf("大吉\n");
  else if(lucky == 1)
  printf("吉\n");
  else
  printf("普通\n");
  }
  return 0;
}
