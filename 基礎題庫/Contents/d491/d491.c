#include<stdio.h>

#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

int main(void)
{
	long long int a, b, temp;
	
	while(scanf("%lld %lld", &a, &b) != EOF)
	{
		if(a > b)
			SWAP(a, b, temp);
		
		long long int sum = 0;
		for(long long int i = a; i <= b; i++)
			if(!(i % 2))
				sum += i;
				
		printf("%lld\n", sum);
	}
	
	return 0;
}
