#include<stdio.h>

int n;
char ans[9];
char unUse[9] = "012345678";

void dfs(int, char*);

int main(void)
{
	while(scanf("%d", &n) != EOF)
	{
		ans[n] = '\0';
		dfs(0, ans);
	}
	
	return 0;
}

void dfs(int pos, char *top)
{
	if(pos == n)
	{
		puts(ans);
		
		return;
	}
	
	for(int i = n; i > 0; i--)
	{
		if(unUse[i])
		{
			*top = unUse[i];
			unUse[i] = 0;
			dfs(pos + 1, top + 1);
			unUse[i] = *top;
		}
	}
}
