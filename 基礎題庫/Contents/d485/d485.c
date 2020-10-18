#include<stdio.h>

int main(void)
{
	long int n, m;
	
	while(scanf("%ld %ld", &n, &m) != EOF)
	{
		int count = (m - n) / 2 + (!(m % 2) || !(n % 2));
		
		printf("%d\n", count);
	}
	
	return 0;
}
