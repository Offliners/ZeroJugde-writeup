#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
	char str[1000];
	
	while(gets(str) != NULL)
	{
		int count = 0;
		
		for(int i = 0; i < strlen(str); i++)
		{
			if(isalpha(str[i]))
			{
				count++;
				
				while(isalpha(str[i]))
					i++;
			}
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}
