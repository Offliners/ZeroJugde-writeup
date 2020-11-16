#include<iostream>

using namespace std;

int main(void)
{
	int M, D, S;
	
	while(cin >> M >> D)
	{
		S = (M * 2 + D) % 3;
		
		if(S == 2)
			cout << "大吉\n";
		else if(S == 1)
			cout << "吉\n";
		else
			cout << "普通\n";
	}
	
	return 0;
}
