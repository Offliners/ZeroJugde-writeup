#include<stdio.h>

int main(void)
{
	long int n, m;
	
	while(scanf("%ld %ld", &n, &m) != EOF)
	{
		if(n != m)
			printf("%ld\n", m + 1);
		else
			printf("%ld\n", m);
	}
	
	return 0;
}
