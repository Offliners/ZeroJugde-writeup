#include<stdio.h>

int main(void)
{
	int h, m, s;
	
	while(scanf("%d %d %d", &h, &m, &s) != EOF)
	{
		if(h * s >= m)
			printf("%d %d %d. I will make it!\n", h, m, s);
		else
			printf("%d %d %d. I will be late!\n", h, m, s);
	}
	
	return 0;
}
