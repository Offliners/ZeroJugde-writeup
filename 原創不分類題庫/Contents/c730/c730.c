#include<stdio.h>

int main(void)
{
	int apple[10];
	int hand;
	
	for(int i = 0; i < 10; i++)
	if(scanf("%d", &apple[i]) == EOF)
		break;

	scanf("%d", &hand);

	int count = 0;
	for(int i = 0; i < 10; i++)
		if(apple[i] <= hand + 30)
			count++;

	printf("%d\n", count);
	
	return 0;
}
