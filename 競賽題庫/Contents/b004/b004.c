#include<stdio.h>
#include<math.h>

int main(void)
{
	int d, l;
	double pi = 2 * acos(0);
	
	while(scanf("%d %d", &d, &l) != EOF)
		printf("%.3lf\n", pi * l * sqrt(l * l - d * d) / 4);
		
	return 0;
}
