#include<stdio.h>

int main(void)
{
	float entry[4];
	
	while(scanf("%f %f %f %f", &entry[0], &entry[1], &entry[2], &entry[3]) == 4)
	{
		int flag = 0;
		
		for(int i = 0; i < 4; i++)
				if(!entry[i])
					flag++;
		
		if(flag == 4)
			break;
		
		float delta = entry[0] * entry[3] - entry[1] * entry[2];
		
		if(!delta)
			printf("cheat!\n");
		else
		{
			for(int i = 0; i < 4; i++)
				entry[i] = entry[i] / delta;	
			
			printf("%.5f %.5f\n", entry[3], -1 * entry[1]);
			printf("%.5f %.5f\n", -1 * entry[2], entry[0]);
		}
	}
	
	return 0;
}
