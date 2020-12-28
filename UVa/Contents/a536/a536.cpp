#include<iostream>

using namespace std;

int main(void)
{
	int n, e, f, c, sum;
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
		{
			cin >> e >> f >> c;
			
			sum = (e + f) / c;
			e = (e + f) % c + sum;
			while(e >= c)
			{
				sum += e / c;
				e = e / c + e % c;
			}
			
			cout << sum << endl;
		}
	}
	
	return 0;
}
