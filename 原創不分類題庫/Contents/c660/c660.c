#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
	char peoples[1001];
	
	while(gets(peoples) != NULL)
	{
		for(int i = 0; i < strlen(peoples); i++)
			peoples[i] = tolower(peoples[i]);
		
		for(int i = 0; i < strlen(peoples); i++)
		{
			if(peoples[i] != ' ')
			{
				peoples[i] = toupper(peoples[i]);
				printf("%s\n", peoples);
				peoples[i] = tolower(peoples[i]);
			}
		}
	}
	
	return 0;
}
