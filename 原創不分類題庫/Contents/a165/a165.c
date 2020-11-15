#include<stdio.h>

int main(void)
{
	int temp;
	long long int num; 
	
	for(long long int i = 100000000; i < 1000000000; i++)
	{
		if(!((i / 10000000) % 2) && !((i / 1000000) % 3) && !((i / 100000) % 4) && !((i / 10000) % 5) && !((i / 1000) % 6) && !((i / 100) % 7) && !((i / 10) % 8) && !(i % 9))
		{
			int digits[10] = {0};
			num = i;
			for(int j = 0; j < 10; j++)
			{
				temp = num % 10;
				digits[temp]++;
				num /= 10;
			}
			
			int flag = 0;
			for(int k = 0; k < 10; k++)
				if(digits[k] > 1)
					flag = 1;
			
			if(!flag)
			{
				printf("%lld\n", i);
				break;
			}
		}
	}
	
	return 0;
}
