#include<iostream>

using namespace std;

int main(void)
{
	int n, a, b, c;
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
		{
			cin >> a >> b >> c;
			
			int space = 0;
			if(c == 1)
				cout << "No free parking spaces." << endl;
			else
			{
				a++;
				while(a % c != 0 && a < b)
				{
					cout << a << " ";
					space = 1;
					a++;
				}
				
				int gap = 1;
				while(a + gap < b)
				{
					cout << a + gap << " ";
					space = 1;
					gap++;
					
					if(gap == c)
					{
						gap = 1;
						a += c;	
					}
				}
				
				if(!space)
					cout << "No free parking spaces.";
				cout << endl;
			}
		}
	}
	
	return 0;
}
