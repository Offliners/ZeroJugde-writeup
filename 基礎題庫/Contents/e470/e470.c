#include<stdio.h>
#include<math.h>

#define e 0.577215664901532860606512090082402431042159335

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		float sum = 0;
		
		if(n <= 100)
		{
			for(int i = 1; i <= n; i++)
				sum += 1.0 / i;
			
			printf("%.3f\n", sum);
		}
		else
			printf("%.3f\n", log(n) + e);
	}
		
	return 0;
}
