#include<stdio.h>

int main(void)
{
	int n;
	int a1, a2, a3;
	
	while(scanf("%d", &n) != EOF)
	{
		scanf("%d %d %d", &a1, &a2, &a3);
		
		for(int i = n; i > 0; i--)
		{
			if(i == a1 || i == a2 || i == a3)
				continue;
			else
				printf("No. %d\n", i);
		}
	}
	
	return 0;
}
