#include<stdio.h>

int main(void)
{
	int rem;
	char id[10];
	char *alphabet[10] = {"BNZ", "AMW", "KLY", "JVX", "HU", "GT", "FS", "ER", "DOQ", "CIP"};

	
	while(scanf("%s", id) != EOF)
	{
		int total = 0;
		
		for(int i = 0; i < 8; i++)
			total += (id[i] - '0') * (8 - i);	

		total += (id[8] - '0');
		rem = (10 - (total % 10)) % 10;
		printf("%s\n", alphabet[rem]);
	}
	
	return 0;
}
