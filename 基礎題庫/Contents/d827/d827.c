#include<stdio.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
		printf("%d\n", (n / 12) * 50 + n % 12 * 5);
		
	return 0;
}
