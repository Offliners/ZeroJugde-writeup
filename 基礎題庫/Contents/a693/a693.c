#include<stdio.h>

int main(void)
{
	int n, m;
	int l, r;
	int sum[100001];
	
	while(scanf("%d %d", &n, &m) != EOF)
	{	
		for(int i = 1; i <= n; i++)
		{
			scanf("%d", &sum[i]);
			if(i != 1)
				sum[i] = sum[i] + sum[i-1];
		}
		
		for(int j = 0; j < m; j++)
		{
			scanf("%d %d", &l, &r);
			printf("%d\n", sum[r] - sum[l-1]);
		}
	}
	
	return 0;
}
