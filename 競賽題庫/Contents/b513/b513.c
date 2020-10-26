#include<stdio.h>

int isPrime(unsigned int);

int main(void)
{
	int n;
	unsigned int num;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%u", &num);
			
			if(isPrime(num))
				printf("Y\n");
			else
				printf("N\n");
		}
	}
	
	return 0;
}

int isPrime(unsigned int a)
{
	for(int i = 2; i * i <= a; i++)
		if(!(a % i))
			return 0;
			
	return 1;
}
