#include<stdio.h>

int main(void)
{
	int num, score;
	
	while(scanf("%d", &num) != EOF)
	{
		switch(num)
		{
			case 0 ... 10:
				score = num * 6;
				break;
			case 11 ... 20:
				score = (num - 10) * 2 + 10 * 6;
				break;
			case 21 ... 40:
				score = (num - 20) * 1 + 10 * 6 + 10 * 2;
				break;
			default:
				score = 100;
		}
		printf("%d\n", score);
	}
	
	return 0;
}
