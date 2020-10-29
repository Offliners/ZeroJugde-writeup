#include<stdio.h>
#include<stdlib.h>

int cmp(const void *, const void *);

int main(void)
{
	int sides[3];
	
	while(scanf("%d %d %d", &sides[0], &sides[1], &sides[2]) != EOF)
	{
		qsort(sides, 3, sizeof(int), cmp);
		
		printf("%d %d %d\n", sides[0], sides[1], sides[2]);
		
		if(sides[0] + sides[1] <= sides[2])
			printf("No\n");
		else if(sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2])
			printf("Right\n");
		else if(sides[0] * sides[0] + sides[1] * sides[1] < sides[2] * sides[2])
			printf("Obtuse\n");
		else
			printf("Acute\n");
	}
	
	return 0;
}

int cmp(const void *a, const void *b)
{
    return *(const int*)a - *(const int*)b;
}
