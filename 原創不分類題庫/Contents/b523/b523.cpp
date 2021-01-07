#include<iostream>
#include<set>

using namespace std;

int main(void)
{
	string str;
	set<string> s;
	
	while(getline(cin, str))
	{
		cout << (s.count(str) ? "YES" : "NO") << endl;
		
		s.insert(str);
	}
	
	return 0;
}
