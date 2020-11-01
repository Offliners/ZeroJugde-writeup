#include<stdio.h>

#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

int main(void)
{
	int n, l, temp;
	int data[51];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &l);
			
			for(int j = 0; j < l; j++)
				scanf("%d", &data[j]);
			
			int count1 = 0;
			for(int m = 0; m < l - 1; m++)
			{
				int count2 = 0;
				
				for(int n = 0; n < l - m - 1; n++)
				{
					if(data[n] > data[n + 1])
					{
						SWAP(data[n], data[n + 1], temp);
						count1++;
						count2++;
					}
				}
				
				if(!count2)
					break;		
			}
			
			printf("Optimal train swapping takes %d swaps.\n", count1);
		}
	}
	
	return 0;
}
