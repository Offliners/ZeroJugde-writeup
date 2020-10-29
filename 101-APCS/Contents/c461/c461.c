#include<stdio.h>

int main(void)
{
	int a, b, c;
	
	while(scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		int flag = 0;
		
		if(a)
			a = 1;
		
		if(b)
			b = 1;
		
		if((a && b) == c)
		{
			printf("AND\n");
			flag = 1;
		}
		
		if((a || b) == c)
		{
			printf("OR\n");
			flag = 1;
		}
		
		if((a != b) == c)
		{
			printf("XOR\n");
			flag = 1;
		}
		
		if(!flag)
			printf("IMPOSSIBLE\n");
	}
	
	return 0;
}
