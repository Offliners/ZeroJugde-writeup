#include<stdio.h>

int cmp(int, int);

int main(void)
{
	int a, b, c;
	
	while(scanf("%d %d %d", &a, &b, &c) != EOF)
		printf("%d\n", cmp(cmp(a, b), c));
		
	return 0;
}

int cmp(int m, int n)
{
	if(m > n)
		return m;
	
	return n;
}
