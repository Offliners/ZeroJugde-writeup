#include<iostream>

using namespace std;

int sum[501][501];

int main(void)
{
	int n, m, x1, y1, x2, y2;
	
	while(cin >> n >> m)
	{
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				cin >> sum[i][j];
				sum[i][j] += sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
			}
		}
		
		for(int i = 0; i < m; i++)
		{
			cin >> x1 >> y1 >> x2 >> y2;
			cout << sum[x2][y2] - sum[x2][y1 - 1] - sum[x1 - 1][y2] + sum[x1 - 1][y1 - 1] << endl;
		}
	}
	
	return 0;
}
