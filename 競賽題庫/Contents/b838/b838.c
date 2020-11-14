#include<stdio.h>
#include<string.h>

int main(void)
{
	int n;
	char quote[21];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%s", quote);
			
			int left = 0;
			int right = 0;
			
			for(int j = 0; j < strlen(quote); j++)
			{
				if(quote[j] == '(')
					left++;
				else
					right++;
				
				if(left < right)
				{
					printf("0\n");
					break;
				}
				
				if(j == strlen(quote) - 1)
				{
					if(left == right)
						printf("%d\n", strlen(quote) / 2);
					else
						printf("0\n");
				}
			}
		}
	}
	
	return 0;
}
