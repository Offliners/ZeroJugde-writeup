#include<stdio.h>
#include<string.h>

int main(void)
{
	char names[1001];
	char del[2] = " ";
	char *token;
	
	while(gets(names) != NULL)
	{
		token = strtok(names, del);
		
		while(token != NULL)
		{
			printf("%s\n", token);
			token = strtok(NULL, del);
		}
	}
	
	return 0;
}
