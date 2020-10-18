#include<stdio.h>

int main(void)
{
	int n, p, m;
	double rate;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d", &p, &m);
			
			rate = (double)(m - p) / p;
			
			if(rate * 100 >= 0)
				rate += 0.0000001;
			else
				rate -= 0.0000001;
			
			if(rate <= -0.07 || rate >= 0.1)
				printf("%.2f%% dispose\n", rate * 100);
			else
				printf("%.2f%% keep\n", rate * 100);
		}
	}
	
	return 0;
}
