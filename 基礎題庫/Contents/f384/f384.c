#include<stdio.h>
#include<string.h>

int main(void)
{
	int m, n;
	char gray[33];
	
	while(scanf("%s", gray) != EOF)
	{
		int tail = 0;
		int num = 0;
		
		for(int i = 0; i < strlen(gray); i++)
		{
			tail = ('0' + tail != gray[i]);
			num += tail << (strlen(gray) - i - 1);
		}
		
		printf("%d\n", num);
	}
	
	return 0;
}
