#include<stdio.h>

int main(void)
{
	int n;
	int num;
	
	while(scanf("%d", &n) != EOF)
	{
		int mod[3] = {0};
		
		int i;
		for(i = 0; i < n; i++)
		{
			scanf("%d", &num);
			mod[num % 3]++;
		}
		
		printf("%d %d %d\n", mod[0], mod[1], mod[2]);
	}
	
	return 0;
}
