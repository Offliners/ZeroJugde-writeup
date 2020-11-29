#include<iostream>
#include<algorithm>

int data[2000000];

using namespace std;

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
