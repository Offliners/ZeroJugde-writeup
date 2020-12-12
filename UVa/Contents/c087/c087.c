#include<stdio.h>
#include<math.h>

int gcd(int, int);
int cal(int, int*);

int main(void)
{
	int n, temp;
	int set[51];
	
	while(1)
	{
		scanf("%d", &n);
		
		if(!n)
			break;
		
		for(int i = 0; i < n; i++)
			scanf("%d", &set[i]);
		
		temp = cal(n, set);
		if(!temp)
			printf("No estimate for this data set.\n");
		else
			printf("%lf\n", sqrt(6.0 * n * (n - 1) / 2 / temp));
	}
	
	return 0;
}

int gcd(int a, int b)
{
	if(!(a % b))
		return b;
	else
		return gcd(b, a % b);
}

int cal(int n, int arg[])
{
	int count = 0;
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == j)
				continue;
			else if(gcd(arg[i], arg[j]) == 1)
				count++;
		}
	}
	
	return count / 2;
}
