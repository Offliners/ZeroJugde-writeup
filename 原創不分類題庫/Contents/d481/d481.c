#include<stdio.h>

#define MAX 100

long long int mat1[MAX][MAX];
long long int mat2[MAX][MAX];
long long int mat3[MAX][MAX];

int main(void)
{
	int a, b, c, d, i, j, k;
	
	while(scanf("%d %d %d %d", &a, &b, &c, &d) != EOF)
	{	
		if(b != c)
		{
			printf("Error\n");
			continue;
		}
		
		for(i = 0; i < a; i++)
			for(j = 0; j < b; j++)
				scanf("%lld", &mat1[i][j]);
				
		for(i = 0; i < c; i++)
			for(j = 0; j < d; j++)
				scanf("%lld", &mat2[i][j]);
				
		for(i = 0; i < a; i++)
		{
			for(j = 0; j < d; j++)
			{
				mat3[i][j] = 0;
				for(k = 0; k < b; k++)
					mat3[i][j] += mat1[i][k] * mat2[k][j];
			}
		}		
					
		for(i = 0; i < a; i++)
		{
			for(j = 0; j < d; j++)
				printf("%lld ", mat3[i][j]);
			
			printf("\n");
		}		
	}
	
	return 0;
}
