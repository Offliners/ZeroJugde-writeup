#include<iostream>
#include<sstream>

using namespace std;

int main(void)
{
	string names, temp, name[50];
	
	while(getline(cin, names))
	{
		int i = 0;
		stringstream ss(names);
		
		while(getline(ss, temp, ' '))
		{
			name[i] = temp;
			cout << name[i] << endl;
			i++;
		}
	}
	
	return 0;
}
