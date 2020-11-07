#include<stdio.h>
#include<math.h>

int main(void)
{
	long long int n;
	
	while(1)
	{
		scanf("%lld", &n);
		
		if(!n)
			break;
			
		int num = sqrt(n);
		
		if(num * num == n)
			printf("yes\n");
		else
			printf("no\n");
	}
	
	return 0;
}
