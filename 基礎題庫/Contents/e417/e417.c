#include<stdio.h>

int main(void)
{
	int n, temp;
	
	while(scanf("%d", &n) != EOF)
	{
		long long int sum = 0;
		long long int result = 0;
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &temp);
			
			result -= temp * temp;
			sum += temp;
		}
		
		printf("%lld\n", (result + sum * sum) / 2);
	}
	
	return 0;
}
