#include<stdio.h>
#include<string.h>

int main(void)
{
	char word[1001];
	
	while(scanf("%s", word) != EOF)
	{
		for(int i = 1; i < strlen(word) - 1; i++)
			word[i] = '_';
		
		printf("%s\n", word);
	}
	
	return 0;
}
