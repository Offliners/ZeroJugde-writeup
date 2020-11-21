#include<iostream>

using namespace std;

int main(void)
{
	int n;
	
	while(cin >> n)
		cout << ((n & 1) ? "Odd" : "Even") << endl;
	
	return 0;
}
