#include<iostream>
#include<sstream>

using namespace std;

int main(void)
{
	string data;
	
	while(getline(cin, data))
	{
		long int sum = 0;
		long int temp = 0;
		
		istringstream isNum(data);
		while(isNum >> temp)
			sum += temp;
		
		cout << sum << endl;
	}
	
	return 0;
}
