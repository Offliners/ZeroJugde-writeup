#include<stdio.h>

int ans[10];
int use[10];

int dfs(int, int);

int main(void)
{
	dfs(0, 0);
	
	return 0;
}

int dfs(int ptr, int step)
{
	if(step == 10)
	{
		if(ans[1] * 10000 + ans[4] * 1000 + ans[5] * 100 + ans[7] * 10 + ans[9] + 2 * (ans[7] * 100 + ans[0] * 10 + ans[3]) == ans[6] * 10000 + ans[2] * 1000 + ans[8] * 100 + ans[7] * 10 + ans[9])
		{
			printf("%d%d%d%d%d + %d%d%d + %d%d%d = %d%d%d%d%d\n", ans[1], ans[4], ans[5], ans[7], ans[9], ans[7], ans[0], ans[3], ans[7], ans[0], ans[3], ans[6], ans[2], ans[8], ans[7], ans[9]);
			
			return 1;
		}
		
		return 0;
	}
	
	for(int i = 0; i < 10; i++)
	{
		if(use[i])
			continue;
		
		ans[step] = i;
		use[i] = 1;
		
		if(dfs(i, step + 1))
			return 1;
		
		use[i] = 0;
	}
	
	return 0;
}
