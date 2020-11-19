#include<iostream>

using namespace std;

int main(void)
{
	int hour;
	
	while(cin >> hour)
		cout << (hour + 9) % 24 << endl;
	
	return 0;
}
