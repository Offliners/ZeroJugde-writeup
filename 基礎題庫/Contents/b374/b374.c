#include<stdio.h>

#define MAX 30001

int main(void)
{
	int n, temp;
	int nums[MAX] = {0};
	
	while(scanf("%d", &n) != EOF)
	{
		int max = 0;
		
		for(int i = 1; i <= n; i++)
		{
			scanf("%d", &temp);
			nums[temp]++;
			
			if(nums[temp] > max)
				max = nums[temp];
		}
			
		for(int i = 1; i <= MAX; i++)
			if(nums[i] == max)
				printf("%d %d\n", i, max);
	}
	
	return 0;
}
