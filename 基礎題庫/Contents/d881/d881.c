#include<stdio.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		int ans = 0;
		int a0 = 1;
		int d = 1;
		
		for(int i = 0; i < 50; i++)
		{
			ans += a0;
			a0 += d;
			d += n;
		}

		printf("%d\n", ans);
	}
	
	return 0;
}
