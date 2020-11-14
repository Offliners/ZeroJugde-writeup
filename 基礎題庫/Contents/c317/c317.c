#include<stdio.h>

int main(void)
{
	int n, X, a, b;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d %d", &X, &a, &b);
			
			int min = 1001;
			for(int i = 0; i <= X/a; i++)
			{
				for(int j = 0; j <= X/b; j++)
				{
					if(a * i + b * j == X)
					{
						if(i + j < min)
							min = i + j;
					}
				}
			}
			
			if(min < 1001)
				printf("%d\n", min);
			else
				printf("-1\n");
		}
	}
	
	return 0;
}
