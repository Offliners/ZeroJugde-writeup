#include<iostream>

using namespace std;

int main(void)
{
	long long int n;
	
	while(cin >> n)
	{
		long long int f = n * (n + 1) / 2;
		long long int g = n * (n + 1) * (n + 2) / 6;
		
		cout << f << " " << g << endl;
	}
	
	return 0;
}
