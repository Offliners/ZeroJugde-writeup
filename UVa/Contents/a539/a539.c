#include<stdio.h>

#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

int main(void)
{
	int n, temp;
	int nums[1001];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
			scanf("%d", &nums[i]);
		
		int count1 = 0;
		for(int i = 0; i < n - 1; i++)
		{
			int count2 = 0;
			
			for(int j = 0; j < n - i - 1; j++)
			{
				if(nums[j] > nums[j + 1])
				{
					SWAP(nums[j], nums[j + 1], temp);
					count1++;
					count2++;
				}
			}
			
			if(!count2)
				break;
		}
			
		printf("Minimum exchange operations : %d\n", count1);
	}
}
