#include<stdio.h>

int main(void)
{
	int nums[10000];
	int i = 0;
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		int j;
		for(j = 0; j < i; j++)
		{
			if(n > nums[j])
			{
				for(int k = i; k >= j; k--)
					nums[k] = nums[k - 1];
				
				break;
			}
		}
		nums[j] = n;
		i++;
		
		if(i % 2)
			printf("%d\n", nums[i / 2]);
		else
			printf("%d\n", (nums[i / 2 - 1] + nums[i / 2]) / 2);
	}
	
	return 0;
}
