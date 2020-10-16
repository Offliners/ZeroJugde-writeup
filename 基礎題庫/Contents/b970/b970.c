#include<stdio.h>

int main(void)
{
	int n;
	while(scanf("%d", &n) != EOF)
		for(int i = 0; i < n; i++)
			printf("%d. I don't say swear words!\n", i + 1);
			
	return 0;
}
