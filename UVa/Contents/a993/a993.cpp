#include<iostream>

using namespace std;

int main(void)
{
	int n;
	
	while(cin >> n)
	{
		int num = 1;
		int count = 1;
		
		while(num % n)
		{
			num %= n;
			num *= 10;
			num += 1;
			count++;
		}
		
		cout << count << endl;
	}
	
	return 0;
}
