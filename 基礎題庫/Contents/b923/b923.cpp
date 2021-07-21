#include<iostream>

using namespace std;

int main(void)
{
	int n, ctrl;
	int top = 0;
	int stack[100001];
	
	cin >> n;
	
	for(int i = 0; i < n; ++i)
	{
		cin >> ctrl;
		
		switch(ctrl)
		{
			case 1:
				top--;
				break;
			case 2:
				cout << stack[top] << endl;
				break;
			case 3:
				cin >> stack[++top];
				break;
		}
	}
	
	return 0;
} 
