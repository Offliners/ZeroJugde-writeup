#include<stdio.h>

int main(void)
{
	int n, a, b, c;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d %d", &a, &b, &c);
			
			int space = 0;
			if(c == 1)
				printf("No free parking spaces.\n");
			else
			{
				a++;
				while(a % c != 0 && a < b)
				{
					printf("%d ", a);
					space = 1;
					a++;
				}
				
				int gap = 1;
				while(a + gap < b)
				{
					printf("%d ", a + gap);
					space = 1;
					gap++;
					
					if(gap == c)
					{
						gap = 1;
						a += c;	
					}
				}
				
				if(!space)
					printf("No free parking spaces.");
				printf("\n");
			}
		}
	}
	
	return 0;
}
