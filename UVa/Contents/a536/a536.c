#include<stdio.h>

int main(void)
{
	int n, e, f, c, sum;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d %d", &e, &f, &c);
			
			sum = (e + f) / c;
			e = (e + f) % c + sum;
			while(e >= c)
			{
				sum += e / c;
				e = e / c + e % c;
			}
			
			printf("%d\n", sum);
		}
	}
	
	return 0;
}
