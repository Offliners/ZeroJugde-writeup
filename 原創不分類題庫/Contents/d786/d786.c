#include<stdio.h>

int main(void)
{
	int n, t, num;
	
	while(scanf("%d", &n) != EOF)
	{	
		for(int i = 0; i < n; i++)
		{
			double sum = 0;
			
			scanf("%d", &t);
			for(int j = 0; j < t; j++)
			{
				scanf("%d", &num);
				sum += num; 
			}
			
			printf("%.2lf\n", sum / t);		
		}
	}
	
	return 0;
}
