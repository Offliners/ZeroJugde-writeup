#include<stdio.h>
#include<string.h>
#include<math.h>

#define e 2.718281828459045
#define m 0.261497212847642

double Log(char*);

int main(void)
{
	char prime[100001];
	char num[16];
	
	while(scanf("%s", prime) != EOF)
	{
		for(int i = 0; i < 15; i++)
			num[i] = prime[i];
		
		printf("%.3lf\n", log((Log(num) + strlen(prime) - 1) / log10(e)) + m);
	}
	
	return 0;	
}

double Log(char *temp)
{
	double exp = 1;
	double result = 0;
	
	for(int i = 0; i < strlen(temp); i++)
	{
		result += exp * (temp[i] - '0');
		exp /= 10;
	}
	
	return log10(result);
}
