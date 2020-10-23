#include<stdio.h>
#include<math.h>

int main(void)
{
	int a, b, c;
	
	while(scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		int s = (a + b + c) / 2;
		
		printf("%.0lf\n", pow(sqrt(s * (s - a) * (s - b) * (s - c)), 2));
	}
	
	return 0;
}
