#include<stdio.h>
#include<stdlib.h>

int cmp(const void *, const void *);

int main(void)
{
	int n;
	int data[3];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < 3; j++)
				scanf("%d", &data[j]);
				
			qsort(data, 3, sizeof(int), cmp);
			
			printf("Case %d: %d\n", i + 1, data[1]);
		}
	}
	
	return 0;
}

int cmp(const void *a, const void *b)
{
    return *(const int*)a - *(const int*)b;
}
