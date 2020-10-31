#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[51];
	
	while(gets(str) != NULL)
	{
		for(int i = 0; i < strlen(str) - 1; i++)
			printf("%d_", str[i]);
		printf("%d\n", str[strlen(str) - 1]);
	}
		
	return 0;
}
