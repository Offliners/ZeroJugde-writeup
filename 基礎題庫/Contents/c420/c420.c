#include<stdio.h>

int main(void)
{
	int n, i, j, k;
	
	while(scanf("%d", &n) != EOF)
	{
		for (i = 1; i <= n; i++, k = 0)
		{
		    for (j = 1; j <= n - i; j++)
		        printf("_");
		        
		    while (k != 2 * i - 1)
			{
		        printf("*");
		        k++;
		    }
		    
		    for (j = k; j < n + i - 1; j++)
		        printf("_");
		        
		    printf("\n");
		}
	}
	
	return 0;
}
