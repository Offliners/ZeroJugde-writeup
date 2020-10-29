#include<stdio.h>
#include<string.h>

#define abs(x) (x > 0) ? (x) : (-x)

int main(void)
{
	char nums[1001];
	
	while(scanf("%s", nums) != EOF)
	{
		int odd = 0;
		int even = 0;
		
		for(int i = 0; i < strlen(nums); i++)
		{
			if(i % 2)
				odd += nums[i] - '0';
			else
				even += nums[i] - '0';	
		}

		printf("%d\n", abs((odd - even)));
	}
	
	return 0;
}
