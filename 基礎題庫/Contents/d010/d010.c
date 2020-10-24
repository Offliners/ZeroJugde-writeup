#include<stdio.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		int sum = 1;
		
		for(int i = 2; i < n; i++)
			if(!(n % i))
				sum += i;
				
		if(sum == n)
			printf("完全數\n");
		else if(sum > n)
			printf("盈數\n");
		else
			printf("虧數\n");
	}
	
	return 0;
}
