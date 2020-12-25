#include<iostream>

using namespace std;

int main(void)
{
	string s;
	
	while(getline(cin, s))
		cout << s << " " << s << endl;
		
	return 0;
}
