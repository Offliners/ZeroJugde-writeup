#include<stdio.h>

int main(void)
{
	int w, h;
	
	while(scanf("%d %d", &h, &w) != EOF)
		printf("%d\n", 2 * (w + h));
		
	return 0;
}
