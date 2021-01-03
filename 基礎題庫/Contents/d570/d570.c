#include<stdio.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		while(n > 0)
		{
			printf("%d\n", n);
			n /= 10;
		}
	}
	
	return 0;
}
