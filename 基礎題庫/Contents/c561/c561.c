#include<stdio.h>

int main(void)
{
	int n, num;
	
	while(scanf("%d", &n) != EOF)
	{
		int max = 0;
		
		for(int i = 0; i < n; i++)
		{
			int rev = 0;
			
			scanf("%d", &num);
			while(num > 0)
			{
				rev = rev * 10 + num % 10;
				num /= 10;
			}
			
			if(rev > max)
				max = rev;
		}
		
		printf("%d\n", max);
	}
	
	return 0;
}
