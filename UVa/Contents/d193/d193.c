#include<stdio.h>
#include<math.h>

int main(void)
{
	int T, n;
	
	while(scanf("%d", &T) != EOF)
	{
		for(int i = 0; i < T; i++)
		{
			scanf("%d", &n);
			
			long long int res = 0;		
			for(long long int j = 1; j <= sqrt(n); j++)
			{
				int temp = n / j;
				int count = temp - n / (j + 1);
				
				res += j * count + (temp == j ? 0 : temp);
			}
			
			printf("%lld\n", res);
		}
	}
	
	return 0;
}
