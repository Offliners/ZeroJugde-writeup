#include<stdio.h>

int main(void)
{
	char arr[5] = {'U', 'G', 'Y', 'T', 'I'};
	int n;
	
	while(scanf("%d", &n) != EOF)
		printf("%c\n", arr[n % 5]);
		
	return 0;
}
