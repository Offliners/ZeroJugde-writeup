#include<iostream>

using namespace std;

int main(void)
{
	int a, an, d;
	
	while(cin >> a >> an >> d)
	{
		if(a == an)
			cout << a << endl;
		else
		{
			cout << a << " ";
			while(a != an)
			{
				a += d;
				cout << a << " ";	
			}
			cout << endl;	
		}
	}
	
	return 0;
}
