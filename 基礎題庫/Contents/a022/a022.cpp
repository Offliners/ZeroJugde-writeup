#include<iostream>

using namespace std;

int main(void)
{
	string s;
	
	while(cin >> s)
	{
		int flag = 0;
		for(int i = 0, j = s.length() - 1; i < j; i++, j--)
		{
			if(s[i] != s[j])
			{
				flag = 1;
				break;
			}
		}
		
		if(flag)
			cout << "no" << endl;
		else
			cout << "yes" << endl;
	}
	
	return 0;	
}
