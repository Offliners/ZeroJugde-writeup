#include<stdio.h>

int main(void)
{
	int n, start, end;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d", &start, &end);
		
			int sum = 0;
			for(int j = start; j <= end; j++)
				if(j % 2)
					sum += j;
				
			printf("Case %d: %d\n", i + 1, sum);
		}
	}
	
	return 0;
}
