#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[15];
	int count = 1;
	
	while(1)
	{
		scanf("%s", str);
		
		if(!strcmp(str, "#"))
			break;
			
		printf("Case %d: ", count);
		
		if(!strcmp(str, "HELLO"))
			printf("ENGLISH\n");
		else if(!strcmp(str, "HOLA"))
			printf("SPANISH\n");
		else if(!strcmp(str, "HALLO"))
			printf("GERMAN\n");
		else if(!strcmp(str, "BONJOUR"))
			printf("FRENCH\n");
		else if(!strcmp(str, "CIAO"))
			printf("ITALIAN\n");
		else if(!strcmp(str, "ZDRAVSTVUJTE"))
			printf("RUSSIAN\n");
		else
			printf("UNKNOWN\n");
			
		count++;
	}
	
	return 0;
}
