#include<iostream>
#include<cmath>
#include <iomanip>

using namespace std;

int main(void)
{
	int n, m;
	int x[21], y[21];
	double dis;
	
	while(cin >> n >> m)
	{
		double min = sqrt(n * n);
		
		for(int i = 0; i < m; i++)
		{
			cin >> x[i] >> y[i];
			for(int j = i - 1; j >= 0; j--)
			{
				dis = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
				
				if(dis < min)
					min = dis;
			}
		}
		
		cout << fixed << setprecision(4) << min << endl;
	}
	
	return 0;
}
