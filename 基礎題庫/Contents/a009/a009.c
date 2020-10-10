#include<stdio.h>
#include<string.h>

int main(void)
{
	char input[9999];
	
	while(scanf("%s", input) != EOF)
	{
		for(int i = 0; i < strlen(input); i++)
			printf("%c", input[i] - 7);
		printf("\n");
	}
}
