#include<stdio.h>

int main(void)
{
	int a, an, d;
	
	while(scanf("%d %d %d", &a, &an, &d) != EOF)
	{
		if(a == an)
			printf("%d\n", a);
		else
		{
			printf("%d ", a);
			while(a != an)
			{
				a += d;
				printf("%d ", a);	
			}
			printf("\n");	
		}
	}
	
	return 0;
}
