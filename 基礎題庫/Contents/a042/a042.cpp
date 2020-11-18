#include<iostream>

using namespace std;

int main(void)
{
	int num;
	
	while(cin >> num)
		cout << num * num - num + 2 << endl;
		
	return 0;
}
