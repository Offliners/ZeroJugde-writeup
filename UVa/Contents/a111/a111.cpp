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
			
		cout << n * (n + 1) * (2 * n + 1) / 6 << endl;
	}
	
	return 0;
}
