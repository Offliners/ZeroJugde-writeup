#include<stdio.h>
#include<math.h>
#include<string.h>

int main(void)
{
	char hex[1000];
	printf("十六進位表示法  相對應的十進位表示法\n");
	
	while(scanf("%s", hex) != EOF)
	{
		int dec = 0;
		
		for(int i = 0; i < strlen(hex); i++)
		{
			if(hex[i] >= 'A' && hex[i] <= 'F')
				dec += (hex[i] - 'A' + 10) * pow(16, strlen(hex) - i - 1);
			else
				dec += (hex[i] - '0') * pow(16, strlen(hex) - i - 1);
		}
		
		
		printf("      %s                 %d\n", hex, dec);
	}
	
	return 0;
}
