#include<stdio.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
		printf("%s\n", (n & 1) ? "Odd" : "Even");
		
	return 0;
}
