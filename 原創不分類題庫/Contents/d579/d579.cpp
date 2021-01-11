#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(void)
{
	double n;
	
	while(cin >> n)
		cout << fixed << setprecision(4) << "|" << n << "|=" << fabs(n) << endl;
	
	return 0;
}
