#include<iostream>

int reverse(int, int);

using namespace std;

int main(void)
{
	int n;
	
	while(cin >> n)
		cout << reverse(n, 0) << endl;

	return 0;
}

int reverse(int num, int rev)
{
	if (num == 0)
		return rev;
	else
		return reverse(num / 10, rev * 10 + num % 10);
}
