#include<stdio.h>

int main(void)
{
	int n, temp;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &temp);
			
			if(temp % 3 == 1)
				printf("NO\n");
			else
				printf("YES\n");
		}
	}
	
	return 0;
}
