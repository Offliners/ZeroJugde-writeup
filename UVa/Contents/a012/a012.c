#include<stdio.h>

#define abs(x) (x < 0) ? -x : x 

int main(void)
{
	long long int a, b;
	
	while(scanf("%lld %lld", &a, &b) != EOF)
		printf("%lld\n", abs((a - b)));
		
	return 0;
}
