#include<stdio.h>

int main(void)
{
	long int n, m;
	
	while(scanf("%ld %ld", &n, &m) != EOF)
	{
		long int sum = 0;
		for(long int i = n; i <= m; i++)
			if(!(i % 2))
				sum += i;
		
		printf("%ld\n", sum);
	}
	
	return 0;
}
