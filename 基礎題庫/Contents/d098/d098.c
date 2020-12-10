#include<stdio.h>
#include<string.h>

int str2int(char*);

int main(void)
{
	char *tok;
	char str[1000];
	
	while(gets(str) != NULL)
	{
		int sum = 0;
		tok = strtok(str, " ");
		
		while(tok != NULL)
		{
			sum += str2int(tok);
			tok = strtok(NULL, " ");
		}
		
		printf("%d\n", sum);
	}
	
	return 0;
}

int str2int(char str[])
{
	int temp = 0;
	
	for(int i = 0; str[i] != NULL; i++)
	{
		if(str[i] >= '0' && str[i] <= '9')
			temp = (temp << 3) + (temp << 1) + str[i] - '0';
		else
			return 0;
	}
	
	return temp;
}
