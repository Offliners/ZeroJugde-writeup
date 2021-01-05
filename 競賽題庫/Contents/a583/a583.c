#include<stdio.h>
#include<math.h>

int main(void)
{
	int n, m;
	int x[21], y[21];
	double dis;
	
	while(scanf("%d %d", &n, &m) != EOF)
	{
		double min = sqrt(n * n);
		
		for(int i = 0; i < m; i++)
		{
			scanf("%d %d", &x[i], &y[i]);
			for(int j = i - 1; j >= 0; j--)
			{
				dis = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
				
				if(dis < min)
					min = dis;
			}
		}
		
		printf("%.4lf\n", min);
	}
	
	return 0;
}
