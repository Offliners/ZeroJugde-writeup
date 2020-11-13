#include<stdio.h>

int main(void)
{
	char plain[1001];
	char cipher[1001];
	
	while(scanf("%s %s", plain, cipher) != EOF)
		printf("%d\n", (cipher[0] - plain[0] + 26) % 26);
	
	return 0;
}
