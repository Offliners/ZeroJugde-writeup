#include<stdio.h>
#include<string.h>

char pwd[60000001];

int main(void)
{
	int n, m, target;
	char *temp;
	char ans[101];
	
	while(1)
	{
		scanf("%d %d", &n, &m);
		
		if(!n && !m)
			break;
		
		getchar();
		temp = pwd;
		int length = 0;
		
		for(int i = 0; i < n; i++)
		{
			gets(temp);
			temp += strlen(temp);
		}
		
		for(int j = 0; j < m; j++)
		{
			scanf(" %d", &target);
			ans[j] = pwd[target - 1];
		}
		ans[m] = 0;
		puts(ans);
	}
	
	return 0;
}
