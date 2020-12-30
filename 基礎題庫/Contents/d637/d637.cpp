#include<iostream>

using namespace std;

int cmp(int, int);

int main(void)
{
	int n;
	int vol[10001];
	int sat[10001];
	int maxSat[101] = {0};
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
			cin >> vol[i] >> sat[i];
		
		for(int i = 0; i < n; i++)
			for(int j = 100; j >= vol[i]; j--)
				maxSat[j] = cmp(maxSat[j], maxSat[j - vol[i]] + sat[i]);
		
		cout << maxSat[100] << endl;
	}
	
	return 0;
}

int cmp(int a, int b)
{
	if(a > b)
		return a;
	
	return b;
}
