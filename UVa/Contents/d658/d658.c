#include<stdio.h>
#include<math.h>

int main(void)
{
	int x;
	int i = 1;
	
	while(1)
	{
		scanf("%d", &x);
		
		if(x < 0)
			break;
			
		printf("Case %d: %.0lf\n", i, ceil(log2(x)));
		
		i++;
	}
	
	return 0;
}
