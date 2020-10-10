#include<stdio.h>

int main(void)
{
	int row, col;
	int arr[100][100];
	int arrT[100][100];
	
	while(scanf("%d %d", &row, &col) != EOF)
	{
		for(int i = 0; i < row; i++)
			for(int j = 0; j < col; j++)
				scanf("%d", &arr[i][j]);
		
		for(int i = 0; i < col; i++)
		{
			for(int j = 0; j < row; j++)
			{
				arrT[i][j] = arr[j][i];
				printf("%d ", arrT[i][j]);
			}
			printf("\n");
		}
			
	}
	
	return 0;
}
