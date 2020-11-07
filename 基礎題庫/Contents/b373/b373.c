#include<stdio.h>

#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

int main(void)
{
	int n, temp;
	int data[10000];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
			scanf("%d", &data[i]);
		
		int count1 = 0;	
		for(int j = 0; j < n; j++)
		{
			int count2 = 0;
			
			for(int k = 0; k < n - j - 1; k++)
			{	
				if(data[k] > data[k + 1])
				{
					SWAP(data[k], data[k + 1], temp);
					count1++;
					count2++;
				}	
			}
			
			if(!count2)
				break;
		}
		
		printf("%d\n", count1);
	}
	
	return 0;
}
