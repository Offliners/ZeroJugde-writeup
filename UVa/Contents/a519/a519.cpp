#include<iostream>

void fibTable(void);

long long fib[81];

using namespace std;

int main(void)
{
	int n;
	
	fibTable();
	
	while(1)
	{
		cin >> n;
		
		if(!n)
			break;
		
		cout << fib[n] << endl;
	}
	
	return 0;
}

void fibTable()
{
	fib[0] = 1;
	fib[1] = 1;
	
	for(int i = 2; i < 81; i++)
		fib[i] = fib[i - 1] + fib[i - 2];
}
