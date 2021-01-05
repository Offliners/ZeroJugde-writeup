#include<iostream>
#include<set>

using namespace std;

int main(void)
{
	int n;
	string str;
	
	while(cin >> n)
	{
		set<string> dict;
		
		for(int i = 0; i < n; i++)
		{
			cin >> str;
			dict.insert(str);
		}
		
		cin >> n;
		for(int i = 0; i < n; i++)
		{
			cin >> str;
			
			if(dict.find(str) != dict.end())
				cout << "yes" << endl;
			else
			{
				cout << "no" << endl;
				dict.insert(str);
			}
		}
	}
	
	return 0;
}
