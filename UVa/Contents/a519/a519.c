#include<stdio.h>

void fibTable(void);

long long fib[81];

int main(void)
{
	int n;
	
	fibTable();
	
	while(1)
	{
		scanf("%d", &n);
		
		if(!n)
			break;
		
		printf("%lld\n", fib[n]);
	}
	
	return 0;
}

void fibTable()
{
	fib[0] = 1;
	fib[1] = 1;
	
	for(int i = 2; i < 81; i++)
		fib[i] = fib[i - 1] + fib[i - 2];
}
