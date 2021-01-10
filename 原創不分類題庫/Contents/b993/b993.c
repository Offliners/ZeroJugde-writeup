#include<stdio.h>

int main(void)
{
	int num;
	int temp;
	
	while(scanf("%d", &num) != EOF)
	{
		int max = 0;
		
		for(int i = 0; i < num; i++)
		{
			scanf("%d", &temp);
			
			if(temp > max)
				max = temp;
		}
		
		printf("%d\n", max);
	}
	
	return 0;
}
