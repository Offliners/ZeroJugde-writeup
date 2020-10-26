#include<stdio.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		if(!n)
		{
			printf("0\n");
			continue;
		}
			
		if(n < 0)
		{
			printf("-");
			n = -n;
		}
		
		int rev = 0;
		while(n > 0)
		{
			rev = rev * 10 + n % 10;
			n /= 10;
		}
			
		printf("%d\n", rev);
	}
	
	return 0;
}
