#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	long long int n;
	
	while(cin >> n)
		cout << (int)log2(n) + 1 << endl;
	
	return 0;
}
