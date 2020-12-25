#include<stdio.h>

int main(void)
{
	char names[1000];
	
	while(scanf("%s", names) != EOF)
	{
		names[0] -= 32;
		puts(names);
	}
	
	return 0;
}
