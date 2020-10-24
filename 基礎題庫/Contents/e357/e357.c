#include<stdio.h>

long int F(long int);

int main(void)
{
	long int x;
	
	while(scanf("%ld", &x) != EOF)
		printf("%ld\n", F(x));
}

long int F(long int x)
{
	if(x == 1)
		return 1;
	else if(!(x % 2))
		return F(x / 2);
	else
		return F(x - 1) + F(x + 1);
}
