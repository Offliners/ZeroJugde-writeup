#include<stdio.h>
#include<string.h>

typedef struct cars
{
	char brand[20];
	char color[20];
}Cars;

typedef struct hints
{
	char hint[20];
	char target[20];
}Hints; 

int main(void)
{
	int n, m;
	Cars data[21];
	Hints hint[21];
	
	while(scanf("%d %d", &n, &m) != EOF)
	{
		for(int i = 0; i < n; i++)
			scanf("%s %s", data[i].brand, data[i].color);
		
		for(int j = 0; j < m; j++)
			scanf("%s %s", hint[j].hint, hint[j].target);
		
		for(int i = 0; i < m; i++)
		{
			if(!strcmp(hint[i].hint, "brand"))
			{	
				for(int j = 0; j < n; j++)
					if(!strcmp(hint[i].target, data[j].brand))
						printf("%s %s\n", data[j].brand, data[j].color);
			}
			else
				for(int j = 0; j < n; j++)
					if(!strcmp(hint[i].target, data[j].color))
						printf("%s %s\n", data[j].brand, data[j].color);
		}
		getchar();
	}
	
	return 0;
}
