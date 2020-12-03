#include<iostream>

using namespace std;

int main(void)
{
	int n;
	
	while(1)
	{
		cin >> n;
		
		if(!n)
			break;
		
		cout << "f91(" << n << ") = " << (n <= 100) * 91 + (n > 100) * (n - 10) << endl;
	}
	
	return 0;	
}
