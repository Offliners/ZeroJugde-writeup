#include<stdio.h>

int main(void)
{
	unsigned int n;
	int temp[4];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < 4; i++)
		{
			temp[i] = n % 256;
			n >>= 8;
		}
		
		printf("%d", temp[3]);
		for(int i = 2; i >= 0; i--)
			printf(".%d", temp[i]);
		printf("\n");
	}
	
	return 0;
}
