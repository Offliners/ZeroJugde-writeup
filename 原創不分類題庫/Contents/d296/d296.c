#include<stdio.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
		printf("%lld\n", n * n * n);
	
	return 0;
}
