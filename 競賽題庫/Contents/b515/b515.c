#include<stdio.h>
#include<string.h>

char morse[26][5] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

int main(void)
{
	int n;
	char code[60];
	char del[2] = " ";
	char *token;
	
	while(scanf("%d", &n) != EOF)
	{
		getchar();
		for(int i = 0; i < n; i++)
		{
			gets(code);
			
			token = strtok(code, del);
			while(token != NULL)
			{
				for(int j = 0; j < 26; j++)
				{
					if(!strcmp(morse[j], token))
					{
						printf("%c", 'A' + j);
						break;
					}
				}
				
				token = strtok(NULL, del);
			}
			printf("\n");
		}
	}
	
	return 0;
}
