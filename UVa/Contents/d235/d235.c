#include<stdio.h>
#include<string.h>

int main(void)
{
	char data[1001];
	
	while(1)
	{
		scanf("%s", data);
		
		if(strlen(data) == 1 && !(data[0] - '0'))
			break;
		
		int odd = 0;
		int even = 0;	
		for(int i = 0; i < strlen(data); i++)
		{
			if(i % 2)
				odd += data[i] - '0';
			else
				even += data[i] - '0';
		}
		
		if(!((odd - even) % 11))
			printf("%s is a multiple of 11.\n", data);
		else
			printf("%s is not a multiple of 11.\n", data);
	}
	
	return 0;
}
