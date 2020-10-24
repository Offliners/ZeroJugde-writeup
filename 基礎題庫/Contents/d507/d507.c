#include<stdio.h>
#include<stdlib.h>

int cmp(const void *, const void *);

int main(void)
{
	int sides[3];
	
	while(scanf("%d %d %d", &sides[0], &sides[1], &sides[2]) != EOF)
	{
		qsort(sides, 3, sizeof(int), cmp);
		
		int h = sides[0] * sides[0] + sides[1] * sides[1];
		int r = sides[2] * sides[2];
		
		if(h == r)
			printf("right triangle\n");
		else if(h < r)
			printf("obtuse triangle\n");
		else
			printf("acute triangle\n");
	}
	
	return 0;
}

int cmp(const void *a, const void *b)
{
    return *(const int*)a - *(const int*)b;
}
