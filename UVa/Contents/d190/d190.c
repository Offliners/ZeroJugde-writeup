#include<stdio.h>
#include<stdlib.h>

int data[2000001];

int cmp(const void *, const void *);

int main(void)
{
	int n;

	
	while(1)
	{
		scanf("%d", &n);
		
		if(!n)
			break;
			
		for(int i = 0; i < n; i++)
			scanf("%d", &data[i]);
			
		qsort(data, n, sizeof(int), cmp);
		
		for(int i = 0; i < n; i++)
			printf("%d ", data[i]);

		printf("\n");
	}
	
	return 0;	
}

int cmp(const void *a, const void *b)
{
    return *(const int*)a - *(const int*)b;
}
