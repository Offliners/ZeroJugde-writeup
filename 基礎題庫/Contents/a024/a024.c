#include<stdio.h>

int gcd(int, int);

int main(void)
{
	int num1, num2;
	
	while(scanf("%d %d", &num1, &num2) != EOF)
		printf("%d\n", gcd(num1, num2));
	
	return 0;
}

int gcd(int num1, int num2)
{
	return (num1 % num2) ? gcd(num2, num1 % num2) : num2;
}
