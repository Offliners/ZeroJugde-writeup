#include<stdio.h>

int Combination(int, int);

int main(void) 
{
	int m, n;
	
	while(scanf("%d %d", &m, &n) != EOF)
		printf("%d\n", Combination(m, n));
		
	return 0;	
}

int Combination(int m, int n)
{
	float c = 1;

	if (n > m / 2)
		n = m - n;
	for (int i = 1; i <= n; i++)
		c *= ((double)(m - i + 1) / i);

	return (int)c;
}
