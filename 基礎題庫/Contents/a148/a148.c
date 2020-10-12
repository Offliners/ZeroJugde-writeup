#include<stdio.h>

int main(void)
{
	int n;
	double score, avg;
	
	while(scanf("%d", &n) != EOF)
	{
		double sum = 0;
		int i = 0;
		for(; i < n; i++)
		{
			scanf("%lf", &score);
			sum += score;
		}
			
		avg = sum / n;
		
		if(avg > 59)
			printf("no\n");
		else
			printf("yes\n");
	}
	
	return 0;
}
