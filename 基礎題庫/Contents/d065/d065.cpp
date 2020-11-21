#include<iostream>

using namespace std;

int main(void)
{
	int a, b, c;
	
	while(cin >> a >> b >> c)
		cout << max(max(a, b), c) << endl;
	
	return 0;	
} 
