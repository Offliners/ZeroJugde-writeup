#include<stdio.h>

long long int len[10] = {0, 9, 189, 2889, 38889, 488889, 5888889, 68888889, 788888889, 8888888889LL};
long long int power[11] = {0, 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};

int main(void)
{
	long long int n, buffer;
	int i, ptr;
	int digits[10];
	
	while(scanf("%lld", &n) != EOF)
	{
		for(i = 9; n <= len[i]; i--);
		
		n -= len[i];
		i++;
		buffer = (n - 1) / i + power[i];
		n %= i;
		ptr = 0;
		
		if(!n)
			n += i;
		
		while(buffer)
		{
			digits[ptr] = buffer % 10;
			ptr++;
			buffer /= 10;
		}
		
		printf("%d\n", digits[ptr - n]);
	}
	
	return 0;
}
