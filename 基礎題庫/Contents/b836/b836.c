#include<stdio.h>

int main(void)
{
	long long int n, m;
	
	while(scanf("%lld %lld", &n, &m) != EOF)
	{
		if(!m || !((n - 1) % m))
			printf("Go Kevin!!\n");
		else
			printf("No Stop!!\n");
	}
	
	return 0;
}
