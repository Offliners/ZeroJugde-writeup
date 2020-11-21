#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
	int w, h;
	
	while(cin >> w)
	{
		cin >> h;
		
		cout << fixed << setprecision(1) << w * 10000.0 / h / h << endl;	
	}
	
	return 0;
}
