#include<stdio.h>
#include<stdlib.h>

int cmp(const void *, const void *);
void isFail(int, int*);

int main(void)
{
	int n;
	int score[20];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
			scanf("%d", &score[i]);
			
		qsort(score, n, sizeof(int), cmp);
		
		isFail(n, score);
	}
	
	return 0;
}

int cmp(const void *a, const void *b)
{
    return *(const int*)a - *(const int*)b;
}

void isFail(int n, int score[])
{
	int fail = 0;
	for(int i = 0; i < n - 1; i++)
	{
		printf("%d ", score[i]);

		if(score[i] < 60)
			fail++;
	}
	printf("%d\n", score[n-1]);

	if(score[n-1] < 60)
		fail++;

	if(!fail)
		printf("best case\n");
	else
		printf("%d\n", score[fail-1]);

	if(fail == n)
		printf("worst case\n");
	else
		printf("%d\n", score[fail]);
}
