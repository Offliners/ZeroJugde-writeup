#include<stdio.h>

int isPrime(long int);

long int primes[1000000] = {0};

int main(void)
{
	long int n;
	 
	for(long int i = 2; i < 1000000; i++)
		if(isPrime(i))
			primes[i] = 1;		
	
	while(1)
	{
		scanf("%ld", &n);
		
		if(!n)
			break;
		
		if(primes[n])
			printf("0\n");
		else
			printf("1\n");
	}
	
	return 0;
}

int isPrime(long int n)
{
	for(long int i = 2; i * i <= n; i++)
		if(!(n % i))
			return 0;
	
	return 1;
}
