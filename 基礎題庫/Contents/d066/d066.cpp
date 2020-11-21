#include<iostream>

using namespace std;

int main(void)
{
	int h, m;
	
	while(cin >> h >> m)
	{
		if(h < 7 || h >= 17 || (h == 7 && m < 30))
			cout << "Off School" << endl;
		else
			cout << "At School" << endl;
	}
	
	return 0;
}
