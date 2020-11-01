#include<stdio.h>
#include<math.h>

int Digits(int, int);

int main(void)
{
	int a, b;
	
	while(scanf("%d %d", &a, &b) != EOF)
		printf("%d\n", Digits(a, b));
	
	return 0;
}

int Digits(int n, int exp)
{
	double temp = exp * log10(n);

	return (int)temp + 1;
}
