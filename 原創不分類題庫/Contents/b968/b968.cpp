#include<iostream>

using namespace std;

int main(void)
{
	string boy;
	string girl;
	
	while(getline(cin, girl))
	{
		getline(cin, boy);
		
		cout << girl << " and " << boy << " sitting in the tree" << endl;
	}
	
	return 0;
}
