#include<iostream>

using namespace std;

int main(void)
{
	string a, b;
	int result[33];
	int temp;
	
	while(cin >> a)
	{
		cin >> b;
		
		int carry = 0;
		for(int i = 31; i >= 0; i--)
		{
			temp = (a[i] - '0') + (b[i] - '0') + carry;
			result[i] = temp % 2;
			carry = temp / 2;
		}
		
		cout << a << endl;
		cout << b << endl;
		cout << "---------------------------------" << endl;
		for(int i = 0; i < 32; i++)
			cout << result[i];
		cout << endl << "****End of Data******************" << endl;
	}
	
	return 0;
}
