#include<iostream>

using namespace std;

int main(void)
{
	int a, n;
	long long int b, c;
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
		{
			cin >> a >> b >> c;
			
			if(a == 1)
				cout << b + c << endl;
			else if(a == 2)
				cout << b - c << endl;
			else if(a == 3)
				cout << b * c << endl;
			else if(a == 4)
				cout << b / c << endl;
		}
	}
	
	return 0;
}
