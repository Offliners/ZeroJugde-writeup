#include<stdio.h>

int main(void)
{
	int y;
	
	while(scanf("%d", &y) != EOF)
		printf("%d\n", (y >= 6 && y < 12) * 590 + (y >= 12 && y < 18) * 790 + (y >= 18 && y < 60) * 890 + (y > 59) * 399);
		
	return 0;
}
