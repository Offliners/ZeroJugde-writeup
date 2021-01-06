#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{
	long int s1, s2, s3;
	double area;
	
	while(cin >> s1 >> s2 >> s3)
	{
		area = s1 + s2 + s3 + (s2 * s3 / 2.0 / s1) + (s1 * s3 / 2.0 / s2) + (s1 * s2 / 2.0 / s3);
	
		cout << fixed << setprecision(2) << area << endl;
	}
	
	return 0;
}
