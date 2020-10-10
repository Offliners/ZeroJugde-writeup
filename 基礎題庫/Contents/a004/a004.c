#include<stdio.h>

int isLeap(int);

int main(void)
{
	int year;
	
	while(scanf("%d", &year) != EOF)
	{
		if(isLeap(year))
			printf("閏年\n");
		else
			printf("平年\n");
	}
	
	return 0;
}

int isLeap(int year)
{
	return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? 1 : 0;
}
