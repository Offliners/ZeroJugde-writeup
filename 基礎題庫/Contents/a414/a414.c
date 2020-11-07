#include<stdio.h>

int main(void)
{
	int n;
	
	while(1)
	{
		scanf("%d", &n);
		
		if(!n)
			break;
			
		int count = 0;
		
		while(n % 2)
		{
			count++;
			n /= 2;
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}
