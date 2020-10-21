#include<stdio.h>

int main(void)
{
	int f;
	
	while(scanf("%d", &f) != EOF)
		printf("%.3lf\n", (double)(f - 32) * 5 / 9.0);
		
	return 0;
}
