#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
	int n;
	int data[1000];
	
	while(cin >> n)
	{
		for(int i = 0 ;i < n; i++)
			cin >> data[i];
		
		sort(data, data + n);
		
		for(int i = 0; i < n; i++)
			cout << data[i] << " ";
		
		cout << endl;
	}
	
	return 0;
}
