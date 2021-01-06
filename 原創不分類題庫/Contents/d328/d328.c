#include<stdio.h>

int main(void)
{
	long int s1, s2, s3;
	double area;
	
	while(scanf("%ld %ld %ld", &s1, &s2, &s3) != EOF)
	{
		area = s1 + s2 + s3 + (s2 * s3 / 2.0 / s1) + (s1 * s3 / 2.0 / s2) + (s1 * s2 / 2.0 / s3);
	
		printf("%.2lf\n", area);
	}
	
	return 0;
}
