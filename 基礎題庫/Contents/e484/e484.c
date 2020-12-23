#include<stdio.h>

int isPrime(int);

int main(void)
{
	int id;
	
	while(scanf("%d", &id) != EOF)
	{
		if(isPrime(id))
			printf("yes\n");
		else
			printf("no\n");
	}
	
	return 0;
}

int isPrime(int n)
{
	for(int i = 2; i * i <= n; i++)
		if(!(n % i))
			return 0;
	
	return 1;
}
