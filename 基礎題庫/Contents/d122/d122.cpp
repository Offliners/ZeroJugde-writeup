#include<iostream>

using namespace std;

int main(void)
{
	long int n;
	
	while(cin >> n)
	{
		int count5 = 0;
		
		for(long int i = 5; i <= n; i *= 5)
			count5 += n / i;
		
		cout << count5 << endl;
	}
	
	return 0;
}
