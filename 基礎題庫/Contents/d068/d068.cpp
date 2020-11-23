#include<iostream>

using namespace std;

int main(void)
{
	int w;
	
	while(cin >> w)
		cout << w - (w > 50) << endl;
	
	return 0;
}
