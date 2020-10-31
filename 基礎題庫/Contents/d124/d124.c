#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[10000];
	
	while(scanf("%s", str) != EOF)
	{
		int sum = 0;
		
		for(int i = 0; i < strlen(str); i++)
		{
			if(str[i] == '-')
				continue;
				
			sum += (str[i] - '0') % 3;
		}
			
		
		if(!(sum % 3))
			printf("yes\n");
		else
			printf("no\n");
	}
	
	return 0;
}
