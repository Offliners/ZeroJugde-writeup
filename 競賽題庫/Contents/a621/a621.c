#include<stdio.h>
#include<math.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
		for(int i = 0; i <= n; i++)
			printf("2^%d = %.0lf\n", i, pow(2, i));
			
	return 0;
}
