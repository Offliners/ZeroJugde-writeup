#include<stdio.h>

int main(void)
{
	int n;

	while(scanf("%d", &n) != EOF)
		printf("%d\n", 1 + n * (n - 1) / 2);
		
	return 0;
}
