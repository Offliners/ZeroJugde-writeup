#include<iostream>

using namespace std;

int main(void)
{
	string name;
	
	while(getline(cin, name))
		cout << "Hey " << name << endl;
		
	return 0;
}
