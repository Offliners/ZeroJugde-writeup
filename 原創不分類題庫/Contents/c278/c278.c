#include<stdio.h>
#include<stdlib.h>

int n;
int data[100000];

int cmp(const void *, const void *);

int main(void)
{
	while(scanf("%d", &n) != EOF)
	{
		int sum = 0;
		
		for(int i = 0; i < n; i++)
			scanf("%d", &data[i]);
			
		qsort(data, n, sizeof(int), cmp);
		
		for(int i = 0; i < n; i += 2)
			sum += data[i + 1] - data[i];
		
		printf("%d\n", sum);
	}
	
	return 0;
}

int cmp(const void *a, const void *b)
{
    return *(const int*)a - *(const int*)b;
}



