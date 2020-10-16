#include<stdio.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j <= i; j++)
				printf("*");
			printf("\n");
		}
	}
	
	return 0;
} 
