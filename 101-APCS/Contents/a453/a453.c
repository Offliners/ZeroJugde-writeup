#include<stdio.h>
#include<math.h>

int isR(int);

int main(void)
{
	int n, a, b, c, d;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d %d", &a, &b, &c);
			
			d = b * b - 4 * a * c;
			
			if(d < 0)
				printf("No\n");
			else if(d == 0)
				printf("Yes\n");
			else
			{
				if(isR(d))
					printf("Yes\n");
				else
					printf("No\n");		
			}
		}
	}
	
	return 0;
}

int isR(int n)
{
	for(int i = 1; i <= sqrt(n); i++)
		if(i * i == n)
			return 1;
	
	return 0;
}
