#include<iostream>

using namespace std;

int slice(int);

int main(void)
{
	int n;
	
	while(cin >> n)
		cout << slice(n) << endl;
	
	return 0;
}

int slice(int n)
{
	return n == 1 ? 2 : slice(n-1) + ((n * n - n + 2) / 2);
}
