#include<stdio.h>

int main(void)
{
	int n, m, cp, iv, temp, max_id;
	
	while(scanf("%d %d", &n, &m) != EOF)
	{
		int max = 0;
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d", &cp, &iv);
			
			switch(iv)
			{
				case 0 ... 29:
					temp = cp + m / 1000 * 10;
					break;
				case 30 ... 39:
					temp = cp + m / 1000 * 50;
					break;
				default:
					temp = cp + m / 1000 * 100;
					break;
			}
			
			if(temp > max)
			{
				max = temp;
				max_id = i + 1;
			}
				
		}
		
		printf("%d %d\n", max_id, max);
	}
	
	return 0;
}
