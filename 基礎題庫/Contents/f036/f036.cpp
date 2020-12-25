#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
	int n, t, temp;
	int chain[1000];
	int str[1000];
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
		{
			cin >> t >> temp;
			
			int min = temp;
			for(int j = 1; j < t; j++)
			{
				cin >> temp;
				
				if(temp < min)
					min = temp;
			}
			str[i] = min;
		}
		
		sort(str, str + n);
		
		cout << str[n - 1] << endl;
	}
	
	return 0;	
}
