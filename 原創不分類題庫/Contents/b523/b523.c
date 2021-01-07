#include<stdio.h>
#include<string.h>

char temp[10001];
char dict[501][10001];

int main(void)
{
	int count = 0;
	
	while(gets(temp) != NULL)
	{
		int flag = 0;
		for(int i = 0; temp[i] != '\0'; i++)
			dict[count][i] = temp[i];
		
		for(int i = 0; i < count; i++)
		{
			if(strstr(dict[i], temp) && strstr(temp, dict[i]))
			{
				flag = 1;
				break;
			}
		}
		
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
		
		count++;
	}
	
	return 0;
}
