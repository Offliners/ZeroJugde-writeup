#include<stdio.h>

int isPerfect(int);

int main(void)
{
	int n, temp;
	int count = 0;
	
	while(1)
	{
		scanf("%d", &n);
		
		if(!n)
		{
			printf("END OF OUTPUT\n");
			break;
		}
		
		if(!count)
			printf("PERFECTION OUTPUT\n");
		
		temp = isPerfect(n);
		
		if(n == temp && n != 1)
			printf("%5d  PERFECT\n", n);
		else if(n < temp)
			printf("%5d  ABUNDANT\n", n);
		else
			printf("%5d  DEFICIENT\n", n);
		
		count++;
	}
	
	return 0;
}

int isPerfect(int num)
{
	int sum = 1;
	
	for(int i = 2; i < num; i++)
			if(!(num % i))
				sum += i;
	return sum;
}
