#include<stdio.h>

int main(void)
{
	int h1, m1, h2, m2;
	
	while(1)
	{
		scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
		
		if(!h1 && !h2 && !m1 && !m2)
			break;
			
		if(h1 * 60 + m1 <= h2 * 60 + m2)
			printf("%d\n", 60 * (h2 - h1) + (m2 - m1));
		else
			printf("%d\n", 1440 + 60 * (h2 - h1) + (m2 - m1));		
	}
	
	return 0;
}
