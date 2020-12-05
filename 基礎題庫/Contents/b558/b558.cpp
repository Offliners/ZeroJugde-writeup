#include<iostream>

using namespace std;

int main(void)
{
	int n;
	
	while(cin >> n)
		cout << 1 + n * (n - 1) / 2 << endl;
	
	return 0;
}
