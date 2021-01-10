#include<iostream>

using namespace std;

int main(void)
{
	int n, m;
	
	while(cin >> n >> m)
		cout << n * (n + 1) * m * (m + 1) / 4 << endl;
		
	return 0;
} 
