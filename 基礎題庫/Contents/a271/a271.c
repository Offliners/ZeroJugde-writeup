#include<stdio.h>

int main(void)
{
	int x, y, z, w, m, n, num;
	char food[10000];
	
	while(scanf("%d", &num) != EOF)
	{
		for(int i = 0; i < num; i++)
		{
			scanf("%d %d %d %d %d %d", &x, &y, &z, &w, &n, &m);
			
			char c = getchar();
			gets(food);
			
			int flag = 0;
			int poison = 0;
			if(m <= 0)
				flag = 1;
	
			else
			{
				for(int j = 0; food[j] != '\0'; j++)
				{
					if(food[j] >= '0' && food[j] <= '9')
					{
						m -= poison;
						
						if(m <= 0)
						{
							flag = 1;
							break;
						}
						
						switch(food[j] - '0')
						{
							case 0:
								break;
							case 1:
								m += x;
								break;
							case 2:
								m += y;
								break;
							case 3:
								m -= z;
								break;
							case 4:
								m -= w;
								poison += n;
								break;
						}
					}
					
					if(m <= 0)
					{
						flag = 1;
						break;
					}	
				}
			}
			
			if(flag)
				printf("bye~Rabbit\n");
			else
				printf("%dg\n", m);
		}
	}
	
	return 0;
}
