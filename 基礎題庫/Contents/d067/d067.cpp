#include<iostream>

using namespace std;

int main(void)
{
	int year;
	
	while(cin >> year)
	{
		if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
			cout << "a leap year" << endl;
		else
			cout << "a normal year" << endl;
	}
	
	return 0;
}
