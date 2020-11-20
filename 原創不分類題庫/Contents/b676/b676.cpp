#include<iostream>

using namespace std;

int main(void)
{
	int n;
	char arr[5] = {'U', 'G', 'Y', 'T', 'I'};
	
	while(cin >> n)
		cout << arr[n % 5] << endl;
	
	return 0; 
}
