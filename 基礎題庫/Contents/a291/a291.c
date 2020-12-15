#include<stdio.h>

int main(void)
{
	int n;
	int ans[4];
	int guess[4];
	int flag[4];
	
	while(scanf("%d %d %d %d", &ans[0], &ans[1], &ans[2], &ans[3]) != EOF)
	{
		scanf("%d", &n);
		
		for(int t = 0; t < n; t++)
		{
			int a = 0;
			int b = 0;
			for(int i = 0; i < 4; i++)
			{
				scanf("%d", &guess[i]);
				
				if(ans[i] == guess[i])
				{
					a++;
					flag[i] = 1;
				}
				else
					flag[i] = 0;
			}
			
			for(int j = 0; j < 4; j++)
			{
				if(flag[j] != 1)
				{
					for(int k = 0; k < 4; k++)
					{
						if(!flag[k] && (ans[k] == guess[j]) && (k != j))
						{
							b++;
							flag[k] = 2;
							break;
						}
					}
				}
			}
			
			printf("%dA%dB\n", a, b);
		}
	}
	
	return 0;
}
