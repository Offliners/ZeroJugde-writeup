#include<iostream>

using namespace std;

int main(void)
{
	string names;
	
	while(cin >> names)
	{
		names[0] -= 32;
		cout << names << endl;
	}
	
	return 0;
}
