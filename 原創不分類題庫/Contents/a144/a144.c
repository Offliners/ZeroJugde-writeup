#include<stdio.h>

int parts[101];

void Partition(int, int, int);

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
		Partition(n, n, 0);
	
	return 0;
}

void Partition(int limit, int now, int ptr)
{
	if(now < 0)
		return;
	
	if(!now)
	{
		for(int i = 0; i < ptr; i++)
			printf("%d ", parts[i]);
		
		printf("\n");
		return;
	}
	
	for(int i = limit; i >= 1; i--)
	{
		parts[ptr] = i;
		Partition(i, now - i, ptr + 1);
	}
}
