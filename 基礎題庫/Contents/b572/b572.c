#include<stdio.h>

int main(void)
{
	int h1, m1, h2, m2, m3, n;

	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d %d %d %d", &h1, &m1, &h2, &m2, &m3);
			
			if((h1 * 60 + m1 + m3) <= (h2 * 60 + m2))
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
	
	return 0;
}
