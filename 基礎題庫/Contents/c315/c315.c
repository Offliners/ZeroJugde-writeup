#include<stdio.h>

int main(void)
{
	int n, ctrl, step;
	
	while(scanf("%d", &n) != EOF)
	{
		int x = 0;
		int y = 0;
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d", &ctrl, &step);
			
			switch(ctrl)
			{
				case 0:
					y += step;
					break;
				case 1:
					x += step;
					break;
				case 2:
					y -= step;
					break;
				case 3:
					x -= step;
					break;
			}
		}
		
		printf("%d %d\n", x, y);
	}
	
	return 0;
}
