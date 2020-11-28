#include<iostream>
#include<algorithm>

int data[100000];

using namespace std;

int main(void)
{
	int n;
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
			cin >> data[i];
		
		sort(data, data + n);
		
		int sum = 0;
		for(int i = 0; i < n; i += 2)
			sum += data[i + 1] - data[i];
		
		cout << sum << endl;
	}
	
	return 0;
}
