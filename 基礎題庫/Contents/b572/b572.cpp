#include<iostream>

using namespace std;

int main(void)
{
	int n, h1, m1, h2, m2, m3;
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
		{
			cin >> h1 >> m1 >> h2 >> m2 >> m3;
			
			if((h1 * 60 + m1 + m3) <= (h2 * 60 + m2))
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
	
	return 0;
}
