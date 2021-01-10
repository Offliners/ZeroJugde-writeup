#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
	double t1, t2, t3, x1, x3;
	
	while(cin >> t1 >> t2 >> t3 >> x1 >> x3)
		cout << fixed << setprecision(6) << (t2 - t3) / (t1 - t3) * (x1 - x3) + x3 << endl;
	
	return 0;
}
