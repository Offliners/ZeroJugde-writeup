#include<stdio.h>

int main(void)
{
	int n, m;
	
	while(scanf("%d", &n) != EOF)
	{
		int max = 0;
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &m);
			
			if(m > max)
				max = m;
		}
		
		printf("%d\n", max);
	}
	
	return 0;
}
