#include<stdio.h>
#include<stdlib.h>

int cmp(const void *, const void *);

int main(void)
{
	long int n[3][2];
	long int result;
	
	while(scanf("%ld %ld %ld", &n[0][1], &n[1][1], &n[2][1]) != EOF)
	{	
		for(int i = 0; i < 3; i++)
			n[i][0] = i;
		
		qsort(n, 3, sizeof(n[0]), cmp);
		
		if(n[0][1] + n[1][1] > n[2][1])
			result = n[1][0];
		else
			result = n[2][0];
			
		switch(result)
		{
			case 0:
				printf("A\n");
				break;
			case 1:
				printf("B\n");
				break;
			case 2:
				printf("C\n");
				break;
		}
	}
	
	return 0;
}

int cmp(const void *a, const void *b)
{
    return *((long long int*)a + 1)-*((long long int*)b + 1);
}
