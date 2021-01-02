#include<stdio.h>

int main(void)
{
	int n;
	int arr[10];
	char url[10][101];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < 10; j++)
				scanf("%s %d", url[j], &arr[j]);
			
			int max = 0;
			int count = 0;
			int relate[10];
			
			max = arr[0];
			relate[count++] = 0;
			
			for(int k = 1; k < 10; k++)
			{
				if(arr[k] == max)
					relate[count++] = k;
				else if(arr[k] > max)
				{
					max = arr[k];
					count = 0;
					relate[count++] = k;
				}
			}
			
			printf("Case #%d:\n", i + 1);
			for(int j = 0; j < count; j++)
				printf("%s\n", url[relate[j]]);
		}
	}
	
	return 0;
}
