#include<stdio.h>
#include<math.h>

int main(void)
{
	int N, T;
	
	while(scanf("%d %d", &N, &T) != EOF)
	{
		int temp = T / N + 1;
		int day;
		
		for(int i = 0; i < 17; i++)
		{
			if(pow(2, i) == temp)
			{
				day = i;
				break;	
			}	
		}
				
		printf("%d\n", day);
	}
	
	return 0;
}
