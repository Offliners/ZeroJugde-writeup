#include<stdio.h>

int main(void)
{
	int n;
	long long int sides[3];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < 3 ;j++)
				scanf("%lld", &sides[j]);
			
			printf("Case %d: ", i + 1);
			if(sides[0] <= 0 || sides[1] <= 0 || sides[2] <= 0)
				printf("Invalid\n");
			else if(sides[0] + sides[1] <= sides[2] || sides[1] + sides[2] <= sides[0] || sides[0] + sides[2] <= sides[1])
				printf("Invalid\n");
			else if(sides[0] == sides[1] && sides[1] == sides[2])
				printf("Equilateral\n");
			else if(sides[0] == sides[1] || sides[1] == sides[2] || sides[0] == sides[2])
				printf("Isosceles\n");
			else
				printf("Scalene\n");
		}
	}
	
	return 0;
}
