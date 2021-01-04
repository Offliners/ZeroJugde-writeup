#include<stdio.h>

int data[100001];

int main(void)
{
	int n, temp;
	
	while(scanf("%d", &n) != EOF)
	{	
		int maxDiff = 0;
		scanf("%d", &data[0]);
		
		int max = data[0];
		for(int i = 1; i < n; i++)
		{
			scanf("%d", &data[i]);
			
			if(data[i] > max)
				max = data[i];
			else
			{
				temp = max - data[i];
				
				if(temp > maxDiff)
					maxDiff = temp;
			}
		}
		
		printf("%d\n", maxDiff);
	}
	
	return 0;
}
