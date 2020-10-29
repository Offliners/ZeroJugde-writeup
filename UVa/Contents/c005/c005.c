#include<stdio.h>

int main(void)
{
	int n, f;
	long long int a, b, c;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &f);
			
			long long int prize = 0;
			for(int j = 0; j < f; j++)
			{
				scanf("%lld %lld %lld", &a, &b, &c);
				
				prize += a * c;
			}
			
			printf("%lld\n", prize);
		}
	}

	return 0;
}
