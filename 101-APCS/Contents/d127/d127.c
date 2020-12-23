#include<stdio.h>

int main(void)
{
	long long int l;
	
	while(scanf("%lld", &l) != EOF)
		printf("%lld\n", l * l / 16);
	
	return 0;
}
