#include<stdio.h>
#include<stdlib.h>

#define MAX 10000

typedef struct point
{
	int head;
	int tail;
}Point;

int cmp(const Point**, const Point**);

int main(void)
{
	int n, start, end;
	Point p[MAX];
	Point *sort[MAX];
	
	for(int k = 0; k < MAX; k++)
		sort[k] = &p[k];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
			scanf("%d %d", &p[i].head, &p[i].tail);
		
		for(int k = 0; k < n; k++)
			sort[k] = &p[k];
			
		qsort(sort, n, sizeof(Point*), cmp);
		
		int count = 0;
		for(int j = 0; j < n; j++)
		{
			start = sort[j]->head;
			end = sort[j]->tail;
			
			while(j + 1 < n && (sort[j + 1]->head) < end)
			{
				if(sort[j + 1]->tail < end)
					j++;
				else
				{
					end = sort[j + 1]->tail;
					j++;
				}
			}
			count += end - start;
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}

int cmp(const Point **a, const Point **b)
{
	return (*a)->head == (*b)->head ? (*a)->tail - (*b)->tail : (*a)->head - (*b)->head;
}
