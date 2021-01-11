#include<stdio.h>
#include<math.h>

int main(void)
{
	double n;
	
	while(scanf("%lf", &n) != EOF)
		printf("|%.04lf|=%.04lf\n", n, fabs(n));
	
	return 0;
}
