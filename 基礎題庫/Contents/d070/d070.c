#include<stdio.h>

int main(void)
{
	int year;
	
	while(1)
	{
		scanf("%d", &year);
		
		if(!year)
			break;
			
		if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
			printf("a leap year\n");
		else
			printf("a normal year\n");
	}
	
	return 0;
}
