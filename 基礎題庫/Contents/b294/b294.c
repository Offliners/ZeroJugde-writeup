#include<stdio.h>

int main(void)
{
	int n, temp;
	
	while(scanf("%d", &n) != EOF)
	{
		int sum = 0;
		
		for(int i = 1; i <= n; i++)
		{
			scanf("%d", &temp);
			sum += temp * i;
		}
		
		printf("%d\n", sum);
	}
	
	return 0;		
}
