#include<stdio.h>

int main(void)
{
	int n, k;
	
	while(scanf("%d %d", &n, &k) != EOF)
	{
		int sum = n + n / k;
		
		n = n / k + n % k;
		while(n >= k)
		{
			n -= k;
			n++;
			sum++;
		}
		
		printf("%d\n", sum);
	}
	
	return 0;
}
