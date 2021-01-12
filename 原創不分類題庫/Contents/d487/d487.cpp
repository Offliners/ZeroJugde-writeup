#include<iostream>

using namespace std;

int fac(int);

int main(void)
{
	int n, temp;
	
	while(cin >> n)
	{
		cout << n << "! = ";
		temp = fac(n);
		cout << temp << endl;
	}
	
	return 0;
}

int fac(int num)
{
	if(!num || num == 1)
	{
		cout << "1 = ";
		return 1;
	}
	
	cout << num << " * ";
	return fac(num - 1) * num;
} 
