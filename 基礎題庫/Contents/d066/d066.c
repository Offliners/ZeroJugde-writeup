#include<stdio.h>

int main(void)
{
	int h, m;
	
	while(scanf("%d %d", &h, &m) != EOF)
	{
		if(h < 7 || h >= 17 || (h == 7 && m < 30))
			printf("Off School\n");
		else
			printf("At School\n");
	}
	
	return 0;
}
