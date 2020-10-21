#include<stdio.h>
#include<math.h>

int month[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

typedef struct node
{
	int year;
	int month;
	int day;
}date;

int passDay(date);

int main(void)
{
	date m, n;
	
	while(scanf("%d %d %d", &m.year, &m.month, &m.day) != EOF)
	{
		scanf("%d %d %d", &n.year, &n.month, &n.day);
		
		printf("%d\n", abs(passDay(m) - passDay(n)));
	}
	
	return 0;
}

int passDay(date d)
{
	return d.year * 365 + (d.year - 1) / 4 - (d.year - 1) / 100 + (d.year - 1) / 400 + month[d.month - 1] + d.day + ((!(d.year % 4) && (d.year % 100) || !(d.year % 400)) && d.month > 2);
}
