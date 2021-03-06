#include<stdio.h>

int main(void)
{
	int n, score, total;
	int pick[101] = {0};
	
	while(1)
	{
		scanf("%d", &n);
		
		if(!n)
			break;
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &score);
			pick[score % 100]++;
		}
		
		total = pick[0] * (pick[0] - 1) / 2 + pick[50] * (pick[50] - 1) / 2;
		pick[0] = 0;
		pick[50] = 0;
		
		for(int i = 0; i < 50; i++)
		{
			total += pick[i] * pick[100 - i];
			pick[i] = 0;
			pick[100 - i] = 0;
		}
		
		printf("%d\n", total);
	}
}
