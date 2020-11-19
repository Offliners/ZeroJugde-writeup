#include<iostream>

using namespace std;

int main(void)
{
	int n;
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
		{
			if(!(i % 7))
				continue;
			
			cout << i << " ";
		}
		cout << endl;
	}
	
	return 0;
}
