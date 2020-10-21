#include<stdio.h>

int main(void)
{
	int min;
	
	while(scanf("%d", &min) != EOF)
		printf("%d\n", (60 - (min + 35) % 60) % 60);
		
	return 0;
}
