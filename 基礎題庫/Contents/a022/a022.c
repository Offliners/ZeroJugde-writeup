#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[1000];
	int flag;
	
	while(scanf("%s", str) != EOF)
	{
		flag = 0;
		
		for(int i = 0, j = strlen(str) - 1; i < j; i++, j--)
		{
			if(str[i] != str[j])
			{
				flag = 1;
				break;
			}
		}
		
		if(flag)
			printf("no\n");
		else
			printf("yes\n");
	}
	
	return 0;
}
