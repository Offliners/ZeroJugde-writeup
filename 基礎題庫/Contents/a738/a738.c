#include<stdio.h>

long int gcd(long int, long int);

int main(void)
{
	long int num1, num2;
	
	while(scanf("%ld %ld", &num1, &num2) != EOF)
		printf("%ld\n", gcd(num1, num2));
	
	return 0;
}

long int gcd(long int num1, long int num2)
{
	return (num1 % num2) ? gcd(num2, num1 % num2) : num2;
}
