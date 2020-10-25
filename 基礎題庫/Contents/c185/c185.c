#include<stdio.h>

int main(void)
{
	char name[1000];
	
	while(gets(name) != NULL)
		printf("Hey %s\n", name);
		
	return 0;
}
