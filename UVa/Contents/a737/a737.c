#include<stdio.h>
#include<stdlib.h>

#define abs(x) (x > 0) ? (x) : (-x)

int cmp(const void *, const void *);

int main(void)
{
	int n, r, mid;
	int si[30000];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &r);
			
			for(int j = 0; j < r; j++)
				scanf("%d", &si[j]);
			
			qsort(si, r, sizeof(int), cmp);
			
			if(r % 2)
				mid = si[r / 2];
			else
				mid = (si[r / 2] + si[r / 2 - 1]) / 2; 

			int total = 0;
			for(int k = 0; k < r; k++)
				total += abs((si[k] - mid));
			
			printf("%d\n", total);
		}		
	}
	
	return 0;
}

int cmp(const void *a, const void *b)
{
    return *(const int*)a - *(const int*)b;
}
