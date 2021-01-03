#include<iostream>

using namespace std;

int main(void)
{
	int n;
	
	while(cin >> n)
	{
		while(n > 0)
		{
			cout << n << endl;
			n /= 10;
		}
	}
	
	return 0;
}
