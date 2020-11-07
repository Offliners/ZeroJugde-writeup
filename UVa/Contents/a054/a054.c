#include<stdio.h>
#include<string.h>

char *map = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main(void)
{
	int i, j;
	char data[1000];
	
	while(gets(data) != NULL)
	{
		for(i = 0; i < strlen(data); i++)
		{
			for(j = 1; map[j] && (map[j] != data[i]); j++);
			
			if(map[j])
				printf("%c", map[j - 1]);
			else
				printf("%c", data[i]);
		}
		
		printf("\n");
	}
	
	return 0;	
}
