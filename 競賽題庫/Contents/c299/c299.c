#include<stdio.h>

int main(void)
{
	int n, num;
	
	while(scanf("%d", &n) != EOF)
	{
		int max = 0;
		int min = 1001;
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &num);
			
			if(num > max)
				max = num;
				
			if(num < min)
				min = num;
		}
		
		if(max - min == n - 1)
			printf("%d %d yes\n", min, max);
		else
			printf("%d %d no\n", min, max);
	}
	
	return 0;
}
