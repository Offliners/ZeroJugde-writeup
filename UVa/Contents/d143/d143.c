#include<stdio.h>

int main(void)
{
	int n;
	long long int a, b;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%lld %lld", &a, &b);
			
			if(a > b)
				printf(">\n");
			else if(a < b)
				printf("<\n");
			else
				printf("=\n");
		}
	}
	
	return 0;
}
