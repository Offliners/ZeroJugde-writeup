#include<stdio.h>

int main(void)
{
	int n;
	int score[4] = {0};
	
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			scanf("%d", &n);
			score[i] += n;
		}
	}
	
	printf("%d:%d\n", score[0], score[1]);
	printf("%d:%d\n", score[2], score[3]);
	
	if(score[0] > score[1] && score[2] > score[3])
		printf("Win\n");
	else if(score[0] < score[1] && score[2] < score[3])
		printf("Lose\n");
	else
		printf("Tie\n");
		
	return 0;
}
