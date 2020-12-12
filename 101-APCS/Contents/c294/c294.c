#include<stdio.h>
#include<stdlib.h>

int cmp(const void *, const void *);
void whichTri(int, int, int);

int main(void)
{
	int sides[3];
	
	while(scanf("%d %d %d", &sides[0], &sides[1], &sides[2]) != EOF)
	{
		qsort(sides, 3, sizeof(int), cmp);
		
		printf("%d %d %d\n", sides[0], sides[1], sides[2]);
		
		whichTri(sides[0], sides[1], sides[2]);
	}
	
	return 0;
}

int cmp(const void *a, const void *b)
{
    return *(const int*)a - *(const int*)b;
}

void whichTri(int a, int b, int c)
{
	if(a + b <= c)
		printf("No\n");
	else if(a * a + b * b == c * c)
		printf("Right\n");
	else if(a * a + b * b < c * c)
		printf("Obtuse\n");
	else
		printf("Acute\n");
}
