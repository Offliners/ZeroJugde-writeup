#include<stdio.h>

int main(void)
{
	int n;
	
	while(1)
	{
		scanf("%d", &n);
		
		if(!n)
			break;
		
		printf("f91(%d) = %d\n", n, (n <= 100) * 91 + (n > 100) * (n - 10));
	}	
		
	return 0;
}
