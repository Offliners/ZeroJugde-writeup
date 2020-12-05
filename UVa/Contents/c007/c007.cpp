#include<iostream>
#include<sstream>

using namespace std;

int main(void)
{
	string s;
	bool flag = true;
	
	while(getline(cin, s))
	{
		ostringstream ss ("");
		
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] == '"')
			{
				if(flag)
					ss << "``";
				else
					ss << "''";
				
				flag = !flag;
			}
			else
				ss << s[i];
		}
		
		cout << ss.str() << endl;
	}
	
	return 0;
}
