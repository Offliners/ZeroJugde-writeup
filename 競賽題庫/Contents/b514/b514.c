#include<stdio.h>

int main(void)
{
	int n;
	int a, b, c, e, f, d, delta, delta_x, delta_y;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
			
			delta = a * e - b * d;
			delta_x = c * e - b * f;
			delta_y = a * f - c * d;
			
			printf("%d %d\n", delta_x/delta, delta_y/delta);		
		}		
	}
	
	return 0;
}
