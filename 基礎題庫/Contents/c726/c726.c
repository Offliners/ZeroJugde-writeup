#include<stdio.h>

int main(void)
{
	char name1[1000];
	char name2[1000];
	
	while(scanf("%s %s", name1, name2) != EOF)
		printf("%s and %s sitting in the tree\n", name1, name2);
	
	return 0;
}
