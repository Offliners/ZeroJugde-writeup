#include<iostream>

using namespace std;

int main(void)
{
	int min;
	
	while(cin >> min)
		cout << (60 - (min + 35) % 60) % 60 << endl;
	
	return 0;
}
