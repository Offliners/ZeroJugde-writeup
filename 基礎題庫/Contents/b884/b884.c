#include<stdio.h>

int main(void)
{
	int n, yee, x, y;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d", &x, &y);
			
			yee = 100 - x - y;
			
			if(0 < yee && yee <= 30)
				printf("sad!\n");
			else if(yee > 30 && yee <= 60)
				printf("hmm~~\n");
			else if(yee > 60 && yee < 100)
				printf("Happyyummy\n");
			else
				printf("evil!!\n");
		}
	}
	
	return 0;
}
