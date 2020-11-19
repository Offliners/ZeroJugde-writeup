#include<iostream>

using namespace std;

int main(void)
{
	string plain;
	string cipher;
	
	while(cin >> plain >> cipher)
		cout << (int(cipher[0]) - int(plain[0]) + 26) % 26 << endl;
	
	return 0;
}
