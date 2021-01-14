#include<stdio.h>

int main(void)
{
	char a[33], b[33];
	int result[33];
	int temp;
	
	while(scanf("%s", a) != EOF)
	{
		scanf("%s", b);
		
		int carry = 0;
		for(int i = 31; i >= 0; i--)
		{
			temp = (a[i] - '0') + (b[i] - '0') + carry;
			result[i] = temp % 2;
			carry = temp / 2;
		}
		
		puts(a);
		puts(b);
		printf("---------------------------------\n");
		for(int i = 0; i < 32; i++)
			printf("%d", result[i]);
		printf("\n****End of Data******************\n");
	}
	
	return 0;
}
