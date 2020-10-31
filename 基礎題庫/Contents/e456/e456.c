#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[1000];
	
	while(gets(str) != NULL)
	{
		int count = 1;
				
		for(int i = 0; i < strlen(str); i++)
		{
			printf("%c", str[i]);
			
			if(str[i] == ' ')
				printf("little, ");

		}
		
		printf(" little Indians\n");
	}
	
	return 0;
}
