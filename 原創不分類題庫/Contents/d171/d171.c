#include<stdio.h>
#include<math.h>

int main(void)
{
	int n, m;
	
	while(scanf("%d %d", &n, &m) != EOF)
		printf("%d\n", (int)(m * log10(n)) + 1);
	
	return 0;
}
