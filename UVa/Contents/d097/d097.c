#include<stdio.h>

#define abs(x) (x > 0) ? (x) : (-x) 

int main(void)
{
	int n;
	int data[3000];

	
	while(scanf("%d", &n) != EOF)
	{
		int jolly[3000] = {0};
		
		scanf("%d", &data[0]);
		for(int i = 1; i < n; i++)
		{
			scanf("%d", &data[i]);
			
			jolly[abs((data[i] - data[i - 1]))]++;
		}
			
		int flag = 0;
		for(int i = 1; i < n; i++)
		{
			if(jolly[i] != 1)
			{
				flag = 1;
				break;
			}
		}
		
		if(flag)
			printf("Not jolly\n");
		else
			printf("Jolly\n");
	}
	
	return 0;
}
