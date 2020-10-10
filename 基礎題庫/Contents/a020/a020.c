#include<stdio.h>

int isReal(char []);
int Sign2Num(char);

int main(void)
{
	char id[10];
	while(scanf("%s", id) != EOF)
	{
		if(isReal(id) % 10)
			printf("fake\n");
		else
			printf("real\n");
	}
	
	return 0;
}

int isReal(char str[10])
{
	int sum = 0;
	int symbol, i;
	
	for(i = 1; i < 9; i++)
		sum += (str[i] - '0') * (9 - i);
	
	sum += (str[9] - '0');
	symbol = Sign2Num(str[0]);
	sum +=  (symbol / 10  + (symbol % 10) * 9);
	
	return sum;
}

int Sign2Num(char S)
{
	switch(S)
	{
		case 'A':
			return 10;
		case 'B':
			return 11;
		case 'C':
			return 12;
		case 'D':
			return 13;
		case 'E':
			return 14;
		case 'F':
			return 15;
		case 'G':
			return 16;
		case 'H':
			return 17;
		case 'I':
			return 34;
		case 'J':
			return 18;
		case 'K':
			return 19;
		case 'L':
			return 20;
		case 'M':
			return 21;
		case 'N':
			return 22;
		case 'O':
			return 35;
		case 'P':
			return 23;
		case 'Q':
			return 24;
		case 'R':
			return 25;
		case 'S':
			return 26;
		case 'T':
			return 27;
		case 'U':
			return 28;
		case 'V':
			return 29;
		case 'W':
			return 32;
		case 'X':
			return 30;
		case 'Y':
			return 31;
		case 'Z':
			return 33;
	}
}
