#include<stdio.h>

int main(void)
{
  int num;
  int counter = 0;

  while(scanf("%d", &num) != EOF)
  {
    for(int i = 2; i < 1000000; i++)
    {
      if(num == 1)
        break;
      else
      {
        while(1)
        {
          if(num % i == 0)
          {
            num /= i;
            counter++;
          }
          else
          {
            if(counter != 0)
            {
              printf("%d", i);
              if(counter > 1)
                printf("^%d", counter);
              if(num > 1)
                printf(" * ");
            }
            counter = 0;
            break;
          }
        }
      }
    }
    printf("\n");
  }

  return 0;
}
