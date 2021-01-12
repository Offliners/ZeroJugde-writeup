#include<stdio.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
		printf("%d\n", 8 * n - 11);
	
	return 0;
}
