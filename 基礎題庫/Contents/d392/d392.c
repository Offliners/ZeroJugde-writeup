#include<stdio.h>
#include<string.h>

int main(void)
{
	char data[10001];
	
	while(gets(data) != NULL)
	{
		long int temp = 0;
		long int sum = 0;
		
		for(int i = 0; i < strlen(data); i++)
		{
			if(data[i] >= '0' && data[i] <= '9')
				temp = temp * 10 + (data[i] - '0');
			else if(data[i] == ' ')
			{
				sum += temp;
				temp = 0;
			}
		}
		sum += temp;
		
		printf("%ld\n", sum);
	}
	
	return 0;
}
