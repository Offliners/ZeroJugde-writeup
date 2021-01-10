#include<stdio.h>

int main(void)
{
	int n, m;
	
	while(scanf("%d %d", &n, &m) != EOF)
		printf("%d\n", n * (n + 1) * m * (m + 1) / 4);
		
	return 0;
}
