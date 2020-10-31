#include<stdio.h>
#include<math.h>

int main(void)
{
	double c;
	int k;
	int flag = 0;
	
	for(int a = 100; a < 999; a++)
	{
		for(int b = 100; b < 999; b++)
		{
			c = sqrt(a * a + b * b);
			
			if(a + b > c && a + c > b && b + c > a && a + b + c == 1000)
			{
				k = a * b * c;
				flag = 1;
				break;	
			}
		}
		
		if(flag)
			break;
	}
	
	printf("%d\n", k);
	
	return 0;
}
