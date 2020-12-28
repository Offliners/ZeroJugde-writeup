#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	int x1, x2;
	int a, b, c, d;
	
	while(cin >> a >> b >> c)
	{
		d = b * b - 4 * a * c;
		
		if(d < 0)
			cout << "No real root" << endl;
		else if(d == 0)
			cout << "Two same roots x=" <<  -b / (2 * a) << endl;
		else
		{
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			cout << "Two different roots x1=" << x1 << " , x2=" << x2 << endl;
		}
	}
	
	return 0;
}
