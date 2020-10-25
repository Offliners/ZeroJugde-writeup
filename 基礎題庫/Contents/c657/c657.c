#include<stdio.h>
#include<string.h>

int main(void)
{
	char data[10000];
	
	while(scanf("%s", data) != EOF)
	{
		int count = 1;
		int max = 0;
		char maxC;
		
		for(int i = 1; i < strlen(data); i++)
		{	
			if(data[i] == data[i - 1])
				count++;
			else 
				count = 1;
			
			if(count > max)
			{
				max = count;
				maxC = data[i];
			}
		}
		
		printf("%c %d\n", maxC, max);
	}
	
	return 0;
}
