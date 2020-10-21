#include<stdio.h>

int main(void)
{
	int year;
	
	while(scanf("%d", &year) != EOF)
		printf("%d\n", year - 1911);
		
	return 0;
}
