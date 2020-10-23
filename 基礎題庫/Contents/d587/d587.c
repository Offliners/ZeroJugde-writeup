#include<stdio.h>
#include<stdlib.h>

int cmp(const void *, const void *);

int main(void)
{
	int num;
	int data[1000000];
	
	while(scanf("%d", &num) != EOF)
	{
		int i;
		for(i = 0; i < num; i++)
			scanf("%d", &data[i]);
			
		qsort(data, num, sizeof(int), cmp);
		
		for(i = 0; i < num; i++)
			printf("%d ", data[i]);
		printf("\n");
	}
	
	return 0;
}

int cmp(const void *a, const void *b)
{
    return *(const int*)a - *(const int*)b;
}
