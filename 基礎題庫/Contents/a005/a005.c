#include<stdio.h>

int main(void)
{
  int num[4];
  int t;
  scanf("%d",&t);
  if((t>=0)&&(t<=20))
  {
      for(int j = 0;j<t;j++)
      {
        for(int i = 0;i<4;i++)
            scanf("%d",&num[i]);
        if(num[3]-num[2]==num[2]-num[1])
            printf("%d %d %d %d %d\n",num[0],num[1],num[2],num[3],num[3]+(num[2]-num[1]));
        else if(num[3]/num[2]==num[2]/num[1])
            printf("%d %d %d %d %d\n",num[0],num[1],num[2],num[3],num[3]*(num[2]/num[1]));
        else
            break;
      }
  }
  return 0;
}
