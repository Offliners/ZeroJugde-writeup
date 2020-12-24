#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[1000001];
	
	while(gets(str) != NULL)
	{
		int len = strlen(str);
		
		for(int i = 0; i < len; i++)
		{
			puts(str + i);
			str[len + i] = str[i];
		}
	}
	
	return 0;
}
