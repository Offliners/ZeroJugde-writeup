#include<stdio.h>
#include<string.h>

int main(void)
{
	char connect[1000];
	char items[1000];
	
	while(scanf("%s", connect) != EOF)
	{
		gets(items);
		
		for(int i = 1; i < strlen(items); i++)
		{
			printf("%c", items[i]);
			
			if(items[i] == ' ')
				printf("%s ", connect);
		}
	}
	
	return 0;
}
