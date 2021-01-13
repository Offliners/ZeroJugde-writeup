#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
	int num1, num2;
	
	while(cin >> num1 >> num2)
		cout << __gcd(num1, num2) << endl;
	
	return 0;
}
