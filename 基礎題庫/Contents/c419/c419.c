#include<stdio.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		int i;
		for(i = 0; i < n; i++)
		{
			int j;
			for(j = i + 1; j < n; j++)
				printf("_");
			for(j = 0; j <= i; j++)
				printf("*");
			printf("\n");
		}
	}
	
	return 0;
} 
