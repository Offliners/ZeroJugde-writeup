#include<iostream>

using namespace std;

int main(void)
{
	int n, year;
	
	while(cin >> n)
	{	
		for(int i = 0; i < n; i++)
		{
			cin >> year;
			
			if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
				cout << "a leap year\n" << endl;
			else
				cout << "a normal year\n" << endl;
		}
	}
	
	return 0;
}
