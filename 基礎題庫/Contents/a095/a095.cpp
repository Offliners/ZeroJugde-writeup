#include<iostream>

using namespace std;

int main(void)
{
	long int n, m;
	
	while(cin >> n >> m)
	{
		if(n != m)
			cout << m + 1 << endl;
		else
			cout << m << endl;
	}
	
	return 0;
}
