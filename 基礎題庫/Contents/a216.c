#include<stdio.h>

int main(void)
{
	long long int n;
	
	while(scanf("%lld", &n) != EOF)
	{
		long long int f;
		long long int g;
		
		f = (n * (n + 1) / 2);
		g = (n * (n + 1) * (n + 2) / 6);
		printf("%lld %lld\n", f, g);
	}
	
	return 0;
}
