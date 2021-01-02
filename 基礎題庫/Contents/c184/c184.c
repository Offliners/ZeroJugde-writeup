#include<stdio.h>

int isPerfect(int);

int main(void)
{
	int n, temp;
	
	while(1)
	{
		scanf("%d", &n);
		
		if(!n)
			break;
			
		temp = isPerfect(n);
		if(n == temp)
			printf("=%d\n", n);
		else
			printf("%d\n", isPerfect(temp) == n ? temp : 0);
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
