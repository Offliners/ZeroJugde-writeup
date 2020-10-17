#include<stdio.h>
#include<string.h>

int main(void)
{
	long int n;
	char day[9];
	char *weekday[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
		
	while(scanf("%s", day) != EOF)
	{
		int pass = 0;
		for(int i = 0; i < 7; i++)
			if(!strcmp(day, weekday[i]))
				pass = i;
		
		scanf("%ld", &n);
		while(n > 7)
			n -= 7;
		
		printf("%s\n", weekday[(n + pass) % 7]);
	}
	
	return 0;
}
