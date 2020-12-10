#include<iostream>

using namespace std;

int main(void)
{
	long long int n, m;
	
	while(cin >> n >> m)
	{
		if(!m || !((n - 1) % m))
			cout << "Go Kevin!!" << endl;
		else
			cout << "No Stop!!" << endl;
	}
	
	return 0;
}
