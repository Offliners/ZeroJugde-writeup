#include<iostream>

using namespace std;

int main(void)
{
	int a, b;
	
	while(cin >> a >> b)
		cout << (b + 100 - a) % 100 << endl;
	
	return 0;
}
