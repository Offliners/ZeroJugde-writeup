#include<stdio.h>
#include<string.h>

char cmp(char*);

int main(void)
{
	int n;
	char symbol[5];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < 4; j++)
				scanf(" %c", &symbol[j]);
			
			symbol[4] = '\0';

			printf("%c", cmp(symbol));
		}
		
		printf("\n");
	}
	
	return 0;
}

char cmp(char *str)
{
	if(!(strcmp(str, "0101")))
		return 'A';
	
	if(!(strcmp(str, "0111")))
		return 'B';
		
	if(!(strcmp(str, "0010")))
		return 'C';
		
	if(!(strcmp(str, "1101")))
		return 'D';
		
	if(!(strcmp(str, "1000")))
		return 'E';
		
	if(!(strcmp(str, "1100")))
		return 'F';
}
