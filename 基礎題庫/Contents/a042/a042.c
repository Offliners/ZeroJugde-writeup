#include<stdio.h>

int main(void)
{
	int num;
	
	while(scanf("%d", &num) != EOF)
		printf("%d\n", num * num - num + 2);
	
	return 0;	
} 
