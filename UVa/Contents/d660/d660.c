#include<stdio.h>

int main(void)
{
	int n, t, temp;
	int data[31];
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &t);
		
		int pos = -1;
		int high = 0;
		int low = 0;
		
		for(int j = 0; j < t; j++)
		{
			scanf("%d", &temp);
			
			if(pos >= 0)
			{
				if(temp > pos)
					high++;
				else if(temp < pos)
					low++;
			}
			
			pos = temp;
		}
		
		printf("Case %d: %d %d\n", i + 1, high, low);
	}
	
	return 0;
}
