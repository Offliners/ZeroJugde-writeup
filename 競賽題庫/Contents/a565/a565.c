#include<stdio.h>
#include<string.h>

char pq[10000001];

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			int p = 0;
			int count = 0;
			
			scanf("%s", pq);
			for(int j = 0; j <strlen(pq); j++)
			{
				if(pq[j] == 'p')
					p++;
				else if(pq[j] == 'q')
				{
					if(!p)
						continue;
					
					p--;
					count++;
				}
			}
			
			printf("%d\n", count);
		}
	}
	
	return 0;
}
