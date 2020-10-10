#include<stdio.h>

int main(void)
{
	int nums[4];
	int num;
	
	scanf("%d", &num);
	if(num >= 0 && num <= 20)
	{
		for(int j = 0; j < num; j++)
		{
			for(int i = 0; i < 4; i++)
				scanf("%d", &nums[i]);
			
			if(nums[3] - nums[2] == nums[2] - nums[1])
			{
				for(int k = 0; k < 4; k++)
					printf("%d ", nums[k]);
				
				printf("%d\n", nums[3] + nums[2] - nums[1]);
			}
			else if(nums[2] * nums[2] == nums[1] * nums[3])
			{
				for(int k = 0; k < 4; k++)
					printf("%d ", nums[k]);
				
				printf("%d\n", nums[3] * nums[2] / nums[1]);
			}
			else
				break;
		}
	}
	
	return 0;
}
