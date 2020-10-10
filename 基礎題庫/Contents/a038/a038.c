#include<stdio.h>

int reverse(int, int);

int main(void)
{
	int num;
	
	while(scanf("%d", &num) != EOF)
		printf("%d\n", reverse(num, 0));
}

int reverse(int num, int rev)
{
	if (num == 0)
		return rev;
	else
		return reverse(num / 10, rev * 10 + num % 10);
}
