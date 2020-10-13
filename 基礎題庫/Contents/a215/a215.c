#include<stdio.h>

int main(void)
{
	int n, m;
	
	while(scanf("%d %d", &n ,&m) != EOF)
	{
		int sum = 0;
		int i = 0;
		 
		while(sum <= m)
		{
			sum += n + i;
			i++;
		}
		
		if(!i)
			i++;
			
		printf("%d\n", i);
	}
	
	return 0;
}
