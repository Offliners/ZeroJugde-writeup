#include<stdio.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		int year;
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &year);
			
			if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
				printf("Case %d: a leap year\n", i + 1);
			else
				printf("Case %d: a normal year\n", i + 1);
		}
	}
	
	return 0;
}
