#include<iostream>

using namespace std;

int main(void)
{
	int n;
	
	while(cin >> n)
	{
		int ans = 0;
		int a0 = 1;
		int d = 1;
		
		for(int i = 0; i < 50; i++)
		{
			ans += a0;
			a0 += d;
			d += n;
		}

		cout << ans << endl;
	}
	
	return 0;
}
