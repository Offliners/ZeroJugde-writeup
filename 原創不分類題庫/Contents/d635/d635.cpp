#include<iostream>

using namespace std;

int main(void)
{
	int n;
	
	while(cin >> n)
	{
		if(n < 0)
			cout << "-1" << endl;
		else
			cout << oct << n << endl;
	}
	
	return 0;
}
