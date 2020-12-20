#include<iostream>

using namespace std;

int main(void)
{
	int n, temp;
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
		{
			cin >> temp;
			
			if(temp % 3 == 1)
				cout << "NO" << endl;
			else
				cout << "YES" << endl;
		}
	}
	
	return 0;
}
