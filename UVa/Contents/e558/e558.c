#include<stdio.h>

#define MAXSIZE 100001

int table[MAXSIZE];

void Table(void);

int main(void)
{
	int n, temp;
	
	Table();
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &temp);
			
			printf("%d\n", table[temp]);
		}
	}
		
	return 0;
}

void Table()
{
	int sum, j;
	
	for(int i = MAXSIZE - 1; i > 0; i--)
	{
		j = i;
		sum = i;
		
		while(j)
		{
			sum += j % 10;
			j /= 10;
		}
		
		if(sum < MAXSIZE)
			table[sum] = i;
	}
}
