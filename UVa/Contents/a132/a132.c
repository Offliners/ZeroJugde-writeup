#include<stdio.h>
#include<string.h>

int main(void)
{
	int n;
	
	while(1)
	{
		scanf("%d", &n);
		
		if(!n)
			break;
			
		char bin[1000] = "";
		int count = 0;
		for(int i = 0; n != 0; i++)
		{
			count += n & 1;
			bin[i] = '0' + (n & 1);
			n >>= 1;
		}
		
		printf("The parity of ");
		for(int j = strlen(bin) - 1; j >= 0; j--)
			printf("%c", bin[j]);
		
		printf(" is %d (mod 2).\n", count);
	}
	
	return 0;
}
