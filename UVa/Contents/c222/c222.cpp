#include<iostream>

using namespace std;

int main(void)
{
	unsigned int a, b;
	
	while(cin >> a >> b)
		 cout << (a ^ b) << endl;
		 
	return 0;
}
