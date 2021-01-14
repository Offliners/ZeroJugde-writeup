#include<stdio.h>

int main(void)
{
	int n;
	double a, b, c, d;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		
			if(b != 0 || d != 0)
				printf("No\n");
			else
			{
				if(a > c)
					printf(">\n");
				else if(a == c)
					printf("=\n");
				else
					printf("<\n");	
			}		
		}
	}
	
	return 0;
}
