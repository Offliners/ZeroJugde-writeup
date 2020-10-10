#include<stdio.h>
#include<math.h>

int main(void)
{
	int x1, x2;
	int a, b, c, d;
	
	while(scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		d = b * b - 4 * a * c;
		
		if(d < 0)
			printf("No real root\n");
		else if(d == 0)
			printf("Two same roots x=%d\n", -b/(2*a));
		else
		{
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			printf("Two different roots x1=%d , x2=%d\n", x1, x2);
		}
	}
	
	return 0;
}
