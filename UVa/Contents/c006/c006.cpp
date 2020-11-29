#include<iostream>

using namespace std;

int main(void)
{
	int init, a1, a2, a3;
	
	while(cin >> init >> a1 >> a2 >> a3)
	{
		if(!init && !a1 && !a2 && !a3)
			break;
		
		int ans = 0;
		int degree = 360 / 40;
		ans += 360 * 2;
		ans += ((init - a1 + 40) % 40) * degree;
		ans += 360;
		ans += ((a2 - a1 + 40) % 40) * degree;
		ans += ((a2 - a3 + 40) % 40) * degree;
		
		cout << ans << endl;
	}
	
	return 0;
}
