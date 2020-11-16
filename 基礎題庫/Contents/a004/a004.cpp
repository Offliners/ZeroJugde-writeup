#include<iostream>

int isLeap(int);

using namespace std;

int main(void)
{
	int year;
	
	while(cin >> year)
	{
		if(isLeap(year))
			cout << "閏年\n";
		else
			cout << "平年\n";
	}
	
	return 0;
}

int isLeap(int year)
{
	return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? 1 : 0;
}
