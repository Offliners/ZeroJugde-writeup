#include<stdio.h>

int main(void)
{
	int start, end;
			
	while(scanf("%d %d", &start, &end) != EOF)
	{
		int count = 0;

		for(int i = start; i <= end; i++)
		{
			if(i < 2)
				continue;
			else
				count++;
				
			for(int j = 2; j * j <= i; j++)
			{
				if(i % j == 0)
				{
					count--;
					break;	
				}	
			}	
		}
		printf("%d\n", count);
	}
	
	return 0;
}
