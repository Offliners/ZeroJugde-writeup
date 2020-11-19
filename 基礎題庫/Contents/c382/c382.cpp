#include<iostream>

using namespace std;

int main(void)
{
	int a, b, result;
	char op;
	
	while(cin >> a >> op >> b)
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
		
		cout << result << endl;
	}
	
	return 0;
}
