#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void)
{
	char pwd[1000];
	
	while(scanf("%s", pwd) != EOF)
	{
		for(int i = 0; i < strlen(pwd) - 1; i++)
			printf("%d", abs(pwd[i] - pwd[i+1]));
		printf("\n");
	}
	
	return 0;
}
