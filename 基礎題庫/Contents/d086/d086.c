#include<stdio.h>
#include<ctype.h>
#include<string.h>

int isAlpha(char*, int);

int main(void)
{
	char str[201];
	
	while(1)
	{
		scanf("%s", &str);
		int strSize = strlen(str);
		int sum = 0;
		
		if(str[strSize-1] == '0' && strSize == 1)
			break;
			
		if(isAlpha(str, strSize))
		{
			for(int i = 0; i< strSize; i++)
			{
				str[i] = tolower(str[i]);
				sum += str[i] - 'a' + 1;
			}	
			
			printf("%d\n", sum);
		}
		else
			printf("Fail\n");
	}
	
	return 0;
}

int isAlpha(char *str, int size)
{
	for(int i = 0; i < size; i++)
		if(!(('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z')))
			return 0;
	
	return 1;
}
