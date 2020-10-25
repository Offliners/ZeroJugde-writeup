#include<stdio.h>

int main(void)
{
	double volt, ohm;
	
	while(scanf("%lf %lf", &volt, &ohm) != EOF)
		printf("%.4lf\n", volt  * 1000 / ohm);
	
	return 0;
}
