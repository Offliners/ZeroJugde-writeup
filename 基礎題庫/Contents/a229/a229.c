#include<stdio.h>

int n, max;
char quote[30];

void dfs(int, int, int);

int main(void)
{	
	while(scanf("%d", &n) != EOF)
	{
		max = n * 2;
		dfs(0, 0, 0);
	}
	
	return 0;
}

void dfs(int left, int right, int pos)
{
	if(left > n || right > left)
		return;
	
	if(pos == max)
	{
		quote[pos] = '\0';
		printf("%s\n", quote);
		return;
	}
	
	quote[pos] = '(', dfs(left + 1, right, pos + 1);
	quote[pos] = ')', dfs(left, right + 1, pos + 1);
}
