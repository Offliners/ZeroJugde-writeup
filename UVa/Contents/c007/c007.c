#include<stdio.h>
#include<string.h>

int main(void)
{
	int count = 0;
	char str[100000];
	
	while(gets(str) != NULL)
	{
		for(int i = 0; i < strlen(str); i++)
		{
			if(str[i] == '"')
			{
				count++;
				if(!(count % 2))
					printf("''");
				else
					printf("``");
			}
			else
				printf("%c", str[i]);
		}
		printf("\n");
	}
	
	return 0;
}
