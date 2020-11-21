#include<iostream>

using namespace std;

int main(void)
{
	string name;
	
	while(getline(cin, name))
		cout << "Go, " << name << ", go go" << endl;
	
	return 0;
}
