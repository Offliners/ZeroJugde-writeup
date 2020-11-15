#include<stdio.h>

int main(void)
{
	int n, avg;
	int count = 1;
	int data[51];
	
	while(1)
	{
		scanf("%d", &n);
		
		if(!n)
			break;
		
		int sum = 0;
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &data[i]);
			
			sum += data[i];
		}
		
		avg = sum / n;
		sum = 0;
		
		for(int j = 0; j < n; j++)
			if(data[j] > avg)
				sum += data[j] - avg;
		
		printf("Set #%d\n", count);
		printf("The minimum number of moves is %d.\n", sum);
		
		count++;
	}
	
	return 0;
}
