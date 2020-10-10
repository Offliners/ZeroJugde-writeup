#include<stdio.h>

int main(void)
{
	int M, D, S;
	
	while(scanf("%d %d", &M, &D) != EOF)
	{
		S = (M * 2 + D) % 3;
		
		if(S == 2)
			printf("大吉\n");
		else if(S == 1)
			printf("吉\n");
		else
			printf("普通\n");
	}
	
	return 0;
}
