#include<stdio.h>

int cmp(int, int);

int main(void)
{
	int a, b, c;
	
	while(scanf("%d %d %d", &a, &b ,&c) != EOF)
		printf("%d 個餅乾，%d 盒巧克力，%d 個蛋糕。\n", a, b + cmp(a / 10, c / 2), c);
	
	return 0;
}

int cmp(int a, int b)
{
	if(a > b)
		return b;
	
	return a;
}
