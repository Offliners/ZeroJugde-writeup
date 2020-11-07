#include<stdio.h>
#include<string.h>

int main(void)
{
	char name[1000];
	
	while(gets(name) != NULL)
		printf("Go, %s, go go\n", name);
	
	return 0;
}
