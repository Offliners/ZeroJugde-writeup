#include<stdio.h>
#include<string.h>

int main(void)
{
	int id;
	double num;
	char *tok;
	char data[10000];
	
	while(gets(data) != NULL)
	{
		double sum = 0;
		
		tok = strtok(data, " ");
		
		while(tok != NULL)
		{
			sscanf(tok, "%d:%lf", &id, &num);
			
			sum += id & 1 ? num : -num;
			
			tok = strtok(NULL, " ");
		}
		
		printf("%g\n", sum);
	}
	
	return 0;
}
