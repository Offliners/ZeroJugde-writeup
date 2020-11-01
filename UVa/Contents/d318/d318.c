#include<stdio.h>
#include<string.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		if(n < 0)
			break;
			
		if(!n)
			printf("0");
		
		char ans[1000] = "";
		for(int i = 0; n != 0; i++)
		{
			ans[i] += '0' + (n % 3);
			n /= 3;
		}
		
		for(int j = strlen(ans) - 1; j >= 0; j--)
			printf("%c", ans[j]);
		
		printf("\n");
	}
	
	return 0;
}
