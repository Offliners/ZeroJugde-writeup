#include<iostream>

using namespace std;

int main(void)
{
	string input;
	
	while(getline(cin, input))
	{
		for(int i = 0; i < input.length(); i++)
			cout << char(input[i] - 7);
		
		cout << endl;
	}
	
	return 0;
}
