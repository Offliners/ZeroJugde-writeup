#include<stdio.h>

int main(void)
{
	int n, num, rem;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &num);
			
			int product;
			if(num)
			{
				product = 1;
				while(num > 0)
				{
					rem = num % 10;
					product *= rem;
					num /= 10;	
				}
			}
			else
				product = 0;

			
			printf("%d\n", product);
		}
	}
	
	return 0;
}
