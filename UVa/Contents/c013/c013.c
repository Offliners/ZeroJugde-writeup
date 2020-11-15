#include<stdio.h>

int main(void)
{
	int n, A, F;
	char buffer[2];
	
	while(scanf("%d", &n) != EOF)
	{
		gets(buffer);
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &A);
			scanf("%d", &F);
			
			for(int j = 0; j < F; j++)
			{
				for(int k = 1; k <= A; k++)
				{
					for(int m = 1; m <= k; m++)
						printf("%d", k);
					printf("\n");
				}
				
				printf("\n");
				
				for(int k = A - 1; k >= 1; k--)
				{
					for(int m = 1; m <= k; m++)
						printf("%d", k);
					printf("\n");
				}
			}
		}
	}
	
	return 0;
}
