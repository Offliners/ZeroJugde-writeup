#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	int n, m;
	
	while(cin >> n >> m)
		cout << (int)(m * log10(n)) + 1 << endl;
	
	return 0;
}
