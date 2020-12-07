#include<iostream>

using namespace std;

int main(void)
{
	long long int n;
	
	while(1)
	{
		cin >> n;
		
		if(n < 0)
			break;
		
		cout << 1 + n * (n + 1) / 2 << endl;
	}
	
	return 0;
}
