#include<stdio.h>

int isPrime(long int);

long int primes[671065] = {0};

int main(void)
{
	long int n;
	 
	for(long int i = 2; i < 671065; i++)
		if(isPrime(i))
			primes[i] = 1;		
	
	while(scanf("%ld", &n) != EOF)
	{	
		if(primes[n])
			printf("It's a prime!!!\n");
		else
			printf("It's not a prime!!!\n");
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
