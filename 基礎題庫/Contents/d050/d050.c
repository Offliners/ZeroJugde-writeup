#include<stdio.h>

int main(void)
{
	int h;
	
	while(scanf("%d", &h) != EOF)
		printf("%d\n", (h + 9) % 24);
		
	return 0;
}
