#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	int T, n;
	
	while(cin >> T)
	{
		for(int i = 0; i < T; i++)
		{
			cin >> n;
			
			long long int res = 0;		
			for(long long int j = 1; j <= sqrt(n); j++)
			{
				int temp = n / j;
				int count = temp - n / (j + 1);
				
				res += j * count + (temp == j ? 0 : temp);
			}
			
			cout << res << "\n";
		}
	}
	
	return 0;
}
