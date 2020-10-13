#include<stdio.h>

int main(void)
{
	long long int n;
	
	while(scanf("%lld", &n) != EOF)
	{
		long long int f = n * (n + 1) / 2;
		long long int g = n * (n + 1) * (n + 2) / 6;
		
		printf("%lld %lld\n", f, g);
	}
	
	return 0;
}
