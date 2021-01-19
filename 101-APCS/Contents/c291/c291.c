#include<stdio.h>

int people[50000];
int target[50000];

int main(void)
{
	int n, i;
	
	while(scanf("%d", &n) != EOF)
	{
		for(i = 0; i < n; i++)
			scanf("%d", &people[i]);
		
		for(i = 0; i < n; i++)
			target[i] = 0;
		
		int count = 0;
		int group = 1;
		int start = 0;
		while(count != n)
		{	
			if(target[people[start]] != 1)
			{
				target[people[start]] = 1;
				start = people[start];
				count++;	
			}
			else
			{
				group++;
				
				for(i = 0; i < n; i++)
				{
					if(target[i] == 0)
					{
						start = people[i];
						break;
					}
				}
				
				if(i == n - 1)
				{
					target[start] = 1;
					count++;
				}
			}
		}
		printf("%d\n", group);
	}
	
	return 0;
}
