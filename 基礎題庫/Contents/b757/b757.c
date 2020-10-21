#include<stdio.h>

int main(void)
{
	double r, R;
	
	while(scanf("%lf", &r) != EOF)
		printf("%g\n", r * 9 / 5 + 32);
		
	return 0;
}
