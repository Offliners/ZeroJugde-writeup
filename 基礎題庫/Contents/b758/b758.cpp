#include<iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	int h, m;
	
	while(cin >> h >> m)
	{
		m += 30;
		h += 2;
		
		if(m >= 60)
		{
			m -= 60;
			h += 1;
		}
		
		if(h >= 24)
			h -= 24;
			
		cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << endl;
	}
	
	return 0;
}
