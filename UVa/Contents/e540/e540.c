#include<stdio.h>
#include<string.h>

int main(void)
{
	int n;
	char str[81];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%s", str);
			
			int score = 0;
			int count = 0;
			for(int j = 0; j < strlen(str); j++)
			{
				if(str[j] == 'O')
				{
					count++;
					score += count;
				}
				else
					count = 0;
			}
			
			printf("%d\n", score);
		}
	}
	
	return 0;
}
