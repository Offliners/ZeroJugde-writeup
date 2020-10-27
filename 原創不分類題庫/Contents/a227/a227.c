#include<stdio.h>

void TOH(int, char, char, char);

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
		TOH(n, 'A', 'B', 'C');
		
	return 0;
} 

void TOH(int n, char source, char temp, char target)
{
	if (n > 0)
	{
		TOH(n - 1, source, target, temp);
		printf("Move ring %d from %c to %c\n", n, source, target);
		TOH(n - 1, temp, source, target);
	}
}
