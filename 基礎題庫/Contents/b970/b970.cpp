#include<iostream>

using namespace std;

int main(void)
{
	int n;
	
	while(cin >> n)
		for(int i = 0; i < n; i++)
			cout << i + 1 << ". I don't say swear words!" << endl;
	
	return 0;
}
