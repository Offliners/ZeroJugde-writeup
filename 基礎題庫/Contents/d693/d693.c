#include<stdio.h>

int gcd(int, int);

int main(void)
{
	int n, temp;
	long int lcm = 1;
	
	while(1)
	{
		lcm = 1;
		scanf("%d", &n);
		
		if(!n)
			break;
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &temp);
			lcm = temp * lcm / gcd(temp, lcm);
		}
			
		printf("%ld\n", lcm);
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
