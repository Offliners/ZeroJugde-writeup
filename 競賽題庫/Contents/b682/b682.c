#include<stdio.h>

int main(void)
{
	int h1, m1, h2, m2;
	
	while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2) != EOF)
	{
		int h = (h2 + 24) - h1 - (m1 > m2);
		int m = m2 + 60 - m1;
		
		printf("%d %d\n", h % 24, m % 60);
	}
	
	return 0;
}
