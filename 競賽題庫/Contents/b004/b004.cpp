#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(void)
{
	int d, l;
	double pi = 2 * acos(0);
	
	while(cin >> d >> l)
		cout << fixed << setprecision(3) <<  pi * l * sqrt(l * l - d * d) / 4 << endl;
		
	return 0;
}
