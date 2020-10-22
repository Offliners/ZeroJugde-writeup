#include<stdio.h>

int main(void)
{
	int w;
	
	while(scanf("%d", &w) != EOF)
		printf("%d\n", w - (w > 50));
		
	return 0;
}
