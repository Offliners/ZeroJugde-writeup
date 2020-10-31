#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
	char str[1001];
	
	while(scanf("%s", str) != EOF)
	{
		int isPal = 2;
		char count[256] = {0};
		
		for(int i = 0; i < strlen(str); i++)
		{
			str[i] = toupper(str[i]);
			count[str[i]]++;
		}
			
		for(int i = 'A'; i <= 'Z'; i++)
		{
			if(count[i] & 1)
			{
				isPal--;
				
				if(isPal == 0)
					break;
			}
		}
			
		if(isPal)
			printf("yes !\n");
		else
			printf("no...\n");	
	}
	
	return 0;
}

