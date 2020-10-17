#include<stdio.h>

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		int G, A, H, W;
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d %d %d", &G, &A, &H, &W);
			
			if(G)
				printf("%.2f\n", 13.7 * W + 5 * H - 6.8 * A + 66);
			else
				printf("%.2f\n", 9.6 * W + 1.8 * H - 4.7 * A + 655);
		}
	}
	
	return 0;
}
