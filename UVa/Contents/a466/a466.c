#include<stdio.h>
#include<string.h>

int main(void)
{
	int n;
	char nums[6];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%s", nums);
			
			if(strlen(nums) == 5)
				printf("3\n");
			else
			{	
				if((nums[0] == 'o') + (nums[1] == 'n') + (nums[2] == 'e') > 1)
					printf("1\n");
						
				if((nums[0] == 't') + (nums[1] == 'w') + (nums[2] == 'o') > 1)
					printf("2\n");
					
			}
		}
	}
	
	return 0;
}
