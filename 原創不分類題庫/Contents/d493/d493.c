#include<stdio.h>
#include<math.h>

int main(void)
{
	long int a, n;
	
	while(scanf("%ld %ld", &a, &n) != EOF)
		printf("%.0lf\n", pow((double)a, n));
	
	return 0;
}
