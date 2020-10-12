#include<stdio.h>

int main(void)
{
	int num;
	int mask = 1 << 31;
	
	while(scanf("%d", &num) != EOF)
	{
		int i = 0;
		for(i = 0; i < 32; i++)
		{
			if(num & mask)
				break;
			num  = num << 1;
		}
		
		for(; i < 32; i++)
		{
			if(num & mask)
				printf("1");
			else
				printf("0");
			num = num << 1;
		}
		
		printf("\n");	
	}
	
	return 0;
}
