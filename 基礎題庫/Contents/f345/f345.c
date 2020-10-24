#include<stdio.h>

#define MAX 1000000

int main(void)
{
	int num[MAX];
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
			scanf("%d", &num[i]);
			
		for(int i = n - 1; i >= 0; i--)
			printf("%d ", num[i]);
		
		printf("\n");
	}
	
	return 0;
}
