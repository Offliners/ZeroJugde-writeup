#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(void)
{
	int n;
		
	while(cin >> n)
		for(int i = 0; i <= n; i++)
			cout << "2^" << i << " = " << setprecision(7) << pow(2, i) << endl;
	
	return 0;
}
