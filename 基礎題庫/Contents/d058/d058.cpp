#include<iostream>

using namespace std;

int main(void)
{
	int n;
	
	while(cin >> n)
		cout << (n > 0) - (n < 0) << endl;
	
	return 0;
}
