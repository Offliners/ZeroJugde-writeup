#include<iostream>

using namespace std;

int main(void)
{
	string s;
	
	while(cin >> s)
	{
		int len = s.length();
		
		for(int i = 0; i < len; i++)
		{
			for(int j = 0; j < len; j++)
				cout << s[(i + j) % len];
		
			cout << endl;
		}
	}
	
	return 0;
}
