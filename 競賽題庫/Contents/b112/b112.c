#include<stdio.h>

int gcd(int, int);

int main(void)
{
	int n;
	int a, b;
	
	while(scanf("%d", &n) != EOF)
	{	
		scanf("%d", &a); 
	
		for(int i = 1; i < n; i++)
		{
			scanf("%d", &b);
			a = gcd(a , b);
		}
			
		printf("%d\n", a);
	}
	
	return 0;
}

int gcd(int a , int b)
{
	if(!(a % b))
		return b;
	else
		return gcd(b, a % b);
}
