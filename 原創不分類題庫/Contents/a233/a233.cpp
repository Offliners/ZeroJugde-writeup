#include<iostream>
#include<algorithm>

using namespace std;

int data[1000001];

int main(void)
{
	int n;
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
			cin >> data[i];
		
		sort(data, data + n);
		
		for(int i = 0; i < n; i++)
			cout << data[i] << " ";
		
		cout << endl;
	}
	
	return 0;
}
