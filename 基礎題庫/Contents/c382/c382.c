#include<stdio.h>

int main(void)
{
	int a, b, result;
	char op;
	
	while(scanf(" %d %c %d", &a, &op, &b) != EOF)
	{
		switch(op)
		{
			case '+':
				result = a + b;
				break;
			case '-':
				result = a - b;
				break;
			case '*':
				result = a * b;
				break;
			case '/':
				result = a / b;
				break;
		}
		
		printf("%d\n", result);
	}
	
	return 0;
}
