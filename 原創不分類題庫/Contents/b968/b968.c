#include<stdio.h>

int main(void)
{
	char girl[1000];
	char boy[1000];
	
	while(gets(girl) != NULL)
	{
		gets(boy);
		printf("%s and %s sitting in the tree\n", girl, boy);
	}
		
	return 0;
}
