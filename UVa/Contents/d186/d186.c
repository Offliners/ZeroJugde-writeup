#include<stdio.h>
#include<math.h>

int main(void)
{
	int a, b;
	
	while(1)
	{
		scanf("%d %d", &a, &b);
		
		if(!a && !b)
			break;
		
		int n1 = sqrt(a);
		int n2 = sqrt(b);
		
		if(n1 * n1 != a)
			n1++;
				
		printf("%d\n", n2 - n1 + 1);
	}
	
	return 0;
}
