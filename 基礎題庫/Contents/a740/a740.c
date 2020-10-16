#include<stdio.h>

int main(void)
{
	long int n;
	
	while(scanf("%ld", &n) != EOF)
	{
		int total = 0;
		
		for(long int i = 2; i * i <= n; i++)
		{	
			while(n % i == 0)
			{
				n /= i;
				total += i;
			}	
		}
		
		if(n == 1)
			printf("%d\n", total);
		else
			printf("%d\n", total + n);
	}
	
	return 0;
}
