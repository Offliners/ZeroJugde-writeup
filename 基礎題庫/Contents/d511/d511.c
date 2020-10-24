#include<stdio.h>

int isTriangle(int*);

int main(void)
{
	int sides[3];
	int score = 0;
	
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 3; j++)
		scanf("%d", &sides[j]);
	
		score += isTriangle(sides);
	}
		
	printf("%d\n", score);
	
	return 0;
}

int isTriangle(int *s)
{
	for(int i = 0; i < 3; i++)
		if(s[i] + s[(i + 1) % 3] <= s[(i + 2) % 3])
			return 0;
			
	return 1;
}
