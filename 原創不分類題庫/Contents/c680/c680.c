#include<stdio.h>
#include<string.h>

int main(void)
{
	int n, m;
	char ans[101];
	char temp[101];
	
	while(scanf("%d", &n) != EOF)
	{
		int score = 100 / n;
		
		scanf("%s", ans);
		scanf("%d", &m);
		
		for(int i = 0; i < m; i++)
		{
			int grade = 0;
			
			scanf("%s", temp);
			int len = strlen(temp) > strlen(ans) ? strlen(ans) : strlen(temp);
			for(int j = 0; j < len; j++)
				if(temp[j] == ans[j])
					grade += score;
			
			printf("%d\n", grade);
		}
	}
	
	return 0;
}
