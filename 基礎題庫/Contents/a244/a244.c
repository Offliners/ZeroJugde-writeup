#include<stdio.h>

int main(void)
{
	int a, n;
	long long b, c;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d %lld %lld", &a, &b, &c);
		
			if(a == 1)
				printf("%lld\n", b + c);
			else if(a == 2)
				printf("%lld\n", b - c);
			else if(a == 3)
				printf("%lld\n", b * c);
			else if(a == 4)
				printf("%lld\n", b / c);	
		}
	}
	
	return 0;
}
