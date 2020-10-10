#include<stdio.h>

int slice(int);

int main(void)
{
	int num;
	
	while(scanf("%d", &num) != EOF)
		printf("%d\n", slice(num));
		
	return 0;
}

int slice(int n)
{
	return n == 1 ? 2 : slice(n-1) + ((n * n - n + 2) / 2);
}
