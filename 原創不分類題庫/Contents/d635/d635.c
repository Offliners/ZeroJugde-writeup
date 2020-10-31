#include<stdio.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		if(n < 0)
			printf("-1\n");
		else
			printf("%o\n", n);
	}
	
	return 0;
}
