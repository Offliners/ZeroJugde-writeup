#include<iostream>

using namespace std;

int isPrime(int);

int main(void)
{
	int id;
	
	while(cin >> id)
	{
		if(isPrime(id))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	
	return 0;
}

int isPrime(int n)
{
	for(int i = 2; i * i <= n; i++)
		if(!(n % i))
			return 0;
	
	return 1;
}
