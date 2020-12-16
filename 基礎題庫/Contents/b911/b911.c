#include<stdio.h>
#include<math.h>

int main(void)
{
	long long int n;
	
	while(scanf("%lld", &n) != EOF)
		printf("%d\n", (int)log2(n) + 1);
	
	return 0;
}
