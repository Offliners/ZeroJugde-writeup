#include<stdio.h>

int main(void)
{
	char str[100];
	
	while(gets(str) != NULL)
		printf("%s %s\n", str, str);
	
	return 0;
}
