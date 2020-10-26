#include<stdio.h>

int fib(int);

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
		printf("%d\n", fib(n + 1));
		
	return 0;
}

int fib(int n)
{
	if ((n == 1) || (n == 2))
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
