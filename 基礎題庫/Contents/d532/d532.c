#include<stdio.h>

int main(void)
{
	int start, end;
	
	while(scanf("%d %d", &start, &end) != EOF)
	{
		int count = 0;
		
		for(int i = start; i <= end; i++)
			if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
				count++;
				
		printf("%d\n", count);
	}
	
	return 0;	
}
