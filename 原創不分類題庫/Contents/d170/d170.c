#include<stdio.h>

int main(void)
{
	int n;
	int ptr[3][2];
	int dx1, dy1, dx2, dy2;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int t = 0; t < n; t++)
		{
			for(int i = 0; i < 3; i++)
				for(int j = 0; j < 2; j++)
					scanf("%d", &ptr[i][j]);
			
			dx1 = ptr[1][0] - ptr[0][0];
			dy1 = ptr[1][1] - ptr[0][1];
			dx2 = ptr[2][0] - ptr[0][0];
			dy2 = ptr[2][1] - ptr[0][1];
			
			if(dx1 * dy2 == dx2 * dy1 && dx1 *dx1 + dy1 * dy1 > dx2 *dx2 + dy2 * dy2 && dx1 * dx2 + dy1 * dy2 >= 0)
				printf("該死的東西!竟敢想讓我死！\n");
			else
				printf("父親大人!母親大人!我快到了！\n");
		}
	}
	
	return 0;
}
