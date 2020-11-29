#include<iostream>

using namespace std;

long int F(long int);

int main(void)
{
	long int x;
	
	while(cin >> x)
		cout << F(x) << endl;
	
	return 0;		
}

long int F(long int x)
{
	if(x == 1)
		return 1;
	else if(!(x % 2))
		return F(x / 2);
	else
		return F(x - 1) + F(x + 1);
}
