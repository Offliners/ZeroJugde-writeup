#include<stdio.h>

int main(void)
{
	int m, n;
	
	while(scanf("%d %d", &m, &n) != EOF)
		printf("%d\n", m * n - 1);
		
	return 0;
}
