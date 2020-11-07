#include<stdio.h>

int main(void)
{
	int n, m, t, hour, min, minimum;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &m);
			
			int sum = 0;
			for(int j = 0; j < m; j++)
			{
				scanf("%d %d", &hour, &min);
				
				t = hour * 60 + min;
				
				if(!j)
					minimum = t;
				
				if(t < minimum && j > 0)
					minimum = t;
					
				sum += t;
			}
				
			printf("Track %d:\n", i + 1);
			printf("Best Lap: %d minute(s) %d second(s).\n", minimum / 60, minimum % 60);
			printf("Average: %d minute(s) %d second(s).\n", sum / m / 60, (sum / m) % 60);
		}
		
		printf("\n");
	}
	
	return 0;
}
