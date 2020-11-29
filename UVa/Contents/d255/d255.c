#include<stdio.h>

int GCD(int, int);

int main(void)
{
	int N;
	
	while(scanf("%d", &N) != EOF)
	{
		if(!N)
			break;
		
		int G = 0;
		for(int i = 1; i < N; i++)
			for(int j = i + 1; j <= N; j++)
				G += GCD(i, j);
				
		printf("%d\n", G);
	}
	
	return 0;
}

int GCD(int x, int y)
{
	while((x %= y) && (y %= x));
	
	return x + y;
}
