#include<stdio.h>

int main(void)
{
	int n;
	int data[100];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
			scanf("%d", &data[i]);
		
		int head = 0;
		int tail = n - 1;	
		for(int i = 0; i < n; i++)
		{
			if(!(i % 2))
			{
				for(int j = head; j <= tail; j++)
					printf("%d ", data[j]);
				
				head++;
			}
			else
			{
				for(int j = tail; j >= head; j--)
					printf("%d ", data[j]);
				
				tail--;
			}
			
			printf("\n");
		}
	}
	
	return 0;
}
