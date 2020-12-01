#include<stdio.h>
#include<stdlib.h>

#define MAX 1000

typedef struct point
{
	int x;
	int y;
}Point;

int cmp(const Point**, const Point**);

int main(void)
{
	int n;
	Point p[MAX];
	Point *sort[MAX];
	
	for(int k = 0; k < MAX; k++)
		sort[k] = &p[k];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
			scanf("%d %d", &p[i].x, &p[i].y);
		
		qsort(sort, n, sizeof(Point*), cmp);
		
		for(int j = 0; j < n; j++)
			printf("%d %d\n", sort[j]->x, sort[j]->y);
	}
	
	return 0;
}

int cmp(const Point **a, const Point **b)
{
	return (*a)->x == (*b)->x ? (*a)->y - (*b)->y : (*a)->x - (*b)->x;
}
