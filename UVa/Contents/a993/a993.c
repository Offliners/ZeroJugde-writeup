#include<stdio.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		int num = 1;
		int count = 1;
		
		while(num % n)
		{
			num %= n;
			num *= 10;
			num += 1;
			count++;
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}
