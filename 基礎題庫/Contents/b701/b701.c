#include<stdio.h>

int x, y, left, upper, right, lower, area;
int land[513][513];

void floodFill(int, int);

int main(void)
{
	while(scanf("%d %d", &x, &y) != EOF)
	{
		for(int i = 0; i < y; i++)
			for(int j = 0; j < x; j++)
				scanf("%d", &land[i][j]);
		
		for(int i = 0; i < y; i++)
		{
			for(int j = 0; j < x; j++)
			{
				if(land[i][j])
				{
					left = j;
					right = j;
					upper = i;
					lower = i;
					area = 0;
					land[i][j] = 0;
					floodFill(i, j);
					printf("%d %d %d %d %d\n", left, upper, right, lower, area);
				}
			}
		}
	}
	
	return 0; 
}

void floodFill(int y, int x)
{
	area++;
	land[y][x] = 0;
	
	if(land[y][x - 1])
	{
		floodFill(y, x - 1);
		if(left > x - 1)
			left = x - 1;
	}
	if(land[y][x + 1])
	{
		floodFill(y, x + 1);
		if(right < x + 1)
			right = x + 1;
	}
	if(land[y + 1][x])
	{
		floodFill(y + 1, x);
		if(lower < y + 1)
			lower = y + 1;
	}
	if(land[y - 1][x])
	{
		floodFill(y - 1, x);
		if(upper > y - 1)
			upper = y - 1;
	}
}
