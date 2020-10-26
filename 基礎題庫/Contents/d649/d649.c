#include<stdio.h>

int main(void)
{
	int n;
	
	while(1)
	{
		scanf("%d", &n);
		
		if(!n)
			break;
		
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(i + j > n - 2)
					printf("+");
				else
					printf("_");
			}
			
			printf("\n");
		}
	}
	
	return 0;
}
