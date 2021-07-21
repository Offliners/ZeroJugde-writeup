#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
	float a, b, c, e, f, d;
	
	while(cin >> a >> b >> c >> d >> e >> f) 
	{
		float delta = a * e - b * d;
		float delta_x = c * e - b * f;
		float delta_y = a * f - c * d;
		
		if(delta == 0 && delta_x == 0 && delta_y == 0)
			cout << "Too many" << endl;
		else if(delta == 0 && delta_x * delta_y != 0)
			cout << "No answer" << endl;
		else
		{
			cout << fixed << setprecision(2) << "x=" << delta_x / delta << endl;
			cout << fixed << setprecision(2) << "y=" << delta_y / delta << endl;			
		}
	}
	
	return 0;
}
