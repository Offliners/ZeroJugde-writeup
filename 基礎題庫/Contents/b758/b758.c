#include<stdio.h>

int main(void)
{
	int h, m;
	
	while(scanf("%d %d", &h, &m) != EOF)
	{
		m += 30;
		h += 2;
		
		if(m >= 60)
		{
			m -= 60;
			h += 1;
		}
		
		if(h >= 24)
			h -= 24;
			
		printf("%02d:%02d\n", h, m);
	}
	
	return 0;
}
