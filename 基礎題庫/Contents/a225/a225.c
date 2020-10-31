#include<stdio.h>

#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

int main(void)
{
	int n, temp;
	int data[1000];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
			scanf("%d", &data[i]);
		
		for(int i = 0; i < n - 1; i++)
		{
			for(int j = 0; j < n - 1 - i; j++)
			{
				if(data[j] % 10 > data[j + 1] % 10)
					SWAP(data[j], data[j + 1], temp);
				else if(data[j] % 10 == data[j + 1] % 10)
					if(data[j] < data[j + 1])
						SWAP(data[j], data[j + 1], temp);
			}
		}
		
		for(int i = 0; i < n; i++)
			printf("%d ", data[i]);
		printf("\n");
	}
	
	return 0;
}
