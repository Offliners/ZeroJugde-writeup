#include<stdio.h>

int fac(int);

int main(void)
{
	int n, temp;
	
	while(scanf("%d", &n) != EOF)
	{
		printf("%d! = ", n);
		temp = fac(n);
		printf("%d\n", temp);
	}
	
	return 0;
}

int fac(int num)
{
	if(!num || num == 1)
	{
		printf("1 = ");
		return 1;
	}
	
	printf("%d * ", num);
	return fac(num - 1) * num;
}
