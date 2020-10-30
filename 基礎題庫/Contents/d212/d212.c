#include<stdio.h>

int main(void)
{
	int n;
	long int step[101];
	
	step[0] = 1;
	step[1] = 1;
	
	for(int i = 2; i < 101; i++)
		step[i] = step[i - 1] + step[i - 2];
	
	while(scanf("%d", &n) != EOF)
		printf("%ld\n", step[n]);
	
	return 0;
}
