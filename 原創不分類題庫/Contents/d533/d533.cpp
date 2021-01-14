#include<iostream>

using namespace std;

int main(void)
{
	int n;
	double a, b, c, d;
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
		{
			cin >> a >> b >> c >> d;
		
			if(b != 0 || d != 0)
				cout << "No" << endl;
			else
			{
				if(a > c)
					cout << ">" << endl;
				else if(a == c)
					cout << "=" << endl;
				else
					cout << "<" << endl;	
			}		
		}
	}
	
	return 0;
}
