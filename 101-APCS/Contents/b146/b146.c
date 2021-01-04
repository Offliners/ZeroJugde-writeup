#include<stdio.h>

int main(void)
{
	int t1, t2, day;
	int max = 0;
	
	for(int i = 0; i < 7; i++)
	{
		scanf("%d %d", &t1, &t2);
		
		if(t1 + t2 > max)
		{
			max = t1 + t2;
			day = i + 1;
		}
	}
	
	if(max < 9)
		day = 0;
	
	printf("%d\n", day);
	
	return 0;
}
