#include<stdio.h>

int main(void)
{
	int n, temp;
	
	while(scanf("%d", &n) != EOF)
	{
		int count = 0;
		int data[1001] = {0};
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &temp);
			
			if(!data[temp])
				count++;
			
			data[temp]++;
		}
		
		printf("%d\n", count);
		for(int j = 0; j < 1001; j++)
			if(data[j])
				printf("%d ", j);
		
		printf("\n");
	}
	
	return 0;
}
