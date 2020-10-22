#include<stdio.h>

int main(void)
{
	long int n;
	
	while(scanf("%ld", &n) != EOF)
	{
		int count5 = 0;
		
		for(long int i = 5; i <= n; i *= 5)
			count5 += n / i;
		
		printf("%d\n", count5);
	}
	
	return 0;
}
