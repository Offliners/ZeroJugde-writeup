#include<stdio.h>
#include<math.h>

int main(void)
{
	int n, start, end;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			int s, e;
			int count = 0;
			
			scanf("%d %d", &start, &end);
			s = sqrt(start);
			e = sqrt(end);
			for(int j = s; j <= e; j++)
				if(j * j >= start && j * j <= end)
					count += j * j;
			
			printf("Case %d: %d\n", i+1, count);
		}
	}
	
	return 0;
}
