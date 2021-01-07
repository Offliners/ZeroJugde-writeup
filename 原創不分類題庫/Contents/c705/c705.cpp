#include<iostream>

using namespace std;

int main(void)
{
	unsigned int n;
	int temp[4];
	
	while(cin >> n)
	{
		for(int i = 0; i < 4; i++)
		{
			temp[i] = n % 256;
			n >>= 8;
		}
		
		cout << temp[3];
		for(int i = 2; i >= 0; i--)
			cout << "." << temp[i];
		cout << endl;
	}
	
	return 0;
}
