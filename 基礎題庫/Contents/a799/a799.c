#include<stdio.h>

#define abs(x) (x) > 0 ? (x) : -(x)

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
		printf("%d\n", abs(n));
		
	return 0;
}
