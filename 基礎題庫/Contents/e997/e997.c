#include<stdio.h>
#include<string.h>

int main(void)
{
	int n;
	char names[1001];
	char stu[51][101];
	char del[2] = " ";
	char *token; 
	
	while(gets(names) != NULL)
	{
		int count = 0;
		
		scanf("%d", &n);
		token = strtok(names, del);
		while(token != NULL)
		{
			strcpy(stu[count], token);
			count++;
			token = strtok(NULL, del);
		}
		getchar();
		
		printf("%s\n", stu[count - n]);
	}
	
	return 0;
}
