#include<stdio.h>

int main(void)
{
	int n;
	long int a, b;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%o %o", &a, &b);
			
			printf("%X\n", a + b);
		}
	}
	
	return 0;
}
