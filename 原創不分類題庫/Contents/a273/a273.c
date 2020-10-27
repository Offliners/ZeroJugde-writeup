#include<stdio.h>

int main(void)
{
	int n, k;
	
	while(scanf("%d %d", &n, &k) != EOF)
	{
		if(n != 0 && k == 0)
			printf("Impossib1e!\n");
		else if(n == 0 && k == 0)
			printf("Ok!\n");
		else
		{
			if(n % k)
				printf("Impossib1e!\n");
			else
				printf("Ok!\n");
		}
	}
	
	return 0;
}
