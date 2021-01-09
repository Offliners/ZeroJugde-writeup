#include<stdio.h>
#include<math.h>

int main(void)
{
	int L;
	
	while(scanf("%d", &L) != EOF)
	{
		int temp = (int)sqrt(L);
		int step = 2 * temp - 1;
		
		step += (L - temp * temp) / temp;
		
		if(L % temp)
			step++;
		
		printf("%d\n", step);
	}
	
	return 0;
}
