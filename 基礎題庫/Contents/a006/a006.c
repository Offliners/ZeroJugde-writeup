#include<stdio.h>
#include<math.h>

int main(void)
{
    int x1,x2;
    int a,b,c,t;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
      t = b*b-4*a*c;
      if(t<0)
         printf("No real root\n");
      else if(t ==0)
         printf("Two same roots x=%d\n",-b/(2*a));
      else
      {
         x1 = (-b+sqrt(t))/(2*a);
         x2 = (-b-sqrt(t))/(2*a);
         printf("Two different roots x1=%d , x2=%d\n",x1,x2);
      }
    }
    return 0;
}
