#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void)
{
	char id[10];
	
	while(scanf("%s", id) != EOF)
	{
		int verify = 0;
		int max1 = 0;
		int max2 = 0;
		
		for(int i = 0; i < strlen(id); i++)
		{
			if(id[i] - '0' >= max1)
			{
				max2 = max1;
				max1 = id[i] - '0';
			}
			else if(id[i] - '0' >= max2)
				max2 = id[i] - '0';
				
			if(i >= strlen(id) - 3)
				verify += (id[i] - '0') * pow(10, strlen(id) - i - 1);
		}
		
		printf("%s\n", (max1 * max1 + max2 * max2 == verify) ? "Good Morning!" : "SPY!");
	}
	
	return 0;
}
