#include<stdio.h>

int main(void)
{
	int n, temp;
	
	while(scanf("%d", &n) != EOF)
	{	
		if(n == 1)
		{
			scanf("%d", &temp);
			printf("%d\n", temp);
		}	
		else
		{
			for(int i = 0; i < n; i++)
				scanf("%d", &temp);
				
			printf("0\n");
		}	
	}
	
	return 0;
}
