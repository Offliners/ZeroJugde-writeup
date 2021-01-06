#include<stdio.h>
#include<string.h>

int main(void)
{
	char echo[101];
	
	while(gets(echo) != NULL)
	{
		printf("%s\n", echo);
		for(int i = 1; i < 5; i++)
		{
			int count = 0;

			for(int j = 0; j < strlen(echo); j++)
			{
				if(echo[j] == ' ')
					count++;

				if(count >= i && j != strlen(echo) - 1)
					printf("%c", echo[j + 1]);
			}
			printf("\n");
		}
	}
	
	return 0;
}
