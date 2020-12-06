#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
	double volt, ohm;
	
	while(cin >> volt >> ohm)
		cout << fixed << setprecision(4)  << volt  * 1000 / ohm << endl;
	
	return 0;
}
