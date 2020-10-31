#include<stdio.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
		printf("%d\n", (n % 9 == 0) && n > 0 ? 9 : n % 9);
		
	return 0;
}
