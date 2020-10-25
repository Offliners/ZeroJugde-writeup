#include<stdio.h>

int main(void)
{
	long int l;
	
	while(scanf("%ld", &l) != EOF)
	{
		if(l < 0)
			printf("%ld\n", -1 * l * 2);
		else
			printf("%ld\n", 2 * l - 1);
	}
	
	return 0;
}
