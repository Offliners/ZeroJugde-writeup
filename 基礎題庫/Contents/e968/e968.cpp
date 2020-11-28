#include<iostream>

using namespace std;

int main(void)
{
	int n;
	int a1, a2, a3;
	
	while(cin >> n)
	{
		cin >> a1 >> a2 >> a3;
		
		for(int i = n; i > 0; i--)
		{
			if(i == a1 || i == a2 || i == a3)
				continue;
			else
				cout << "No. " << i << endl;
		}
	}
	
	return 0;
}
