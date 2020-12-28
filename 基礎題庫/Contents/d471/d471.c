#include<stdio.h>

int num;
char bin[16];

void dfs(int n)
{
	if(n == num)
	{
		puts(bin);
		return;
	}
	
	bin[n] = '0';
	dfs(n + 1);
	bin[n] = '1';
	dfs(n + 1);
}

int main(void)
{
	while(scanf("%d", &num) != EOF)
	{
		bin[num] = 0;
		dfs(0);
	}
	
	return 0;
}
