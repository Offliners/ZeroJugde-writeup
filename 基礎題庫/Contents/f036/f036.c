#include<stdio.h>
#include<stdlib.h>

int cmp(const void *, const void *);

int main(void)
{
	int n, t, temp;
	int chain[1000];
	int str[1000];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &t);
			scanf("%d", &temp);
			
			int min = temp;
			for(int j = 1; j < t; j++)
			{
				scanf("%d", &temp);
				
				if(temp < min)
					min = temp;
			}
			str[i] = min;
		}
		
		qsort(str, n, sizeof(int), cmp);
		
		printf("%d\n", str[n - 1]);
	}
	
	return 0;	
}

int cmp(const void *a, const void *b)
{
    return *(const int*)a - *(const int*)b;
}
