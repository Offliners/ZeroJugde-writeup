#include<stdio.h>

int main(void)
{
	int n, w;
	
	while(scanf("%d", &n) != EOF)
	{
		int count = 0;
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &w);
			count += (w <= 10);
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}
