#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(void)
{
	long int a, n;
	
	while(cin >> a >> n)
		cout << fixed << setprecision(0) << pow(a, n) << endl;
	
	return 0;
}
