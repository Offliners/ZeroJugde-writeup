#include<stdio.h>

int division(int, long long int *, long long int *);

int main(void)
{
	int n;
	int num = 0;
	long long int a, b;
	
	while(scanf("%lld %lld %d", &a, &b, &n) != EOF)
	{
		printf("%d.", division(num, &a, &b));
		
		int i;
		for(i = 0; i < n; i++)
			printf("%d", division(num, &a, &b));
			
		printf("\n");
	}
	
	return 0;
}

int division(int num, long long int *a, long long int *b)
{
	num = *a / *b;
	*a = *a % *b;
	*a *= 10;
	
	return num;
}
