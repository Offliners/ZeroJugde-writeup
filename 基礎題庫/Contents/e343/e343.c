#include<stdio.h>

int main(void)
{
	int w, h;
	
	while(scanf("%d", &w) != EOF)
	{
		scanf("%d", &h);
		
		printf("%.1lf\n", w * 10000.0 / h / h); 
	}
	
	return 0;
}
