#include<iostream>

using namespace std;

int main(void)
{
	int h1, m1, h2, m2;
	
	while(1)
	{
		cin >> h1 >> m1 >> h2 >> m2;
		
		if(!h1 && !h2 && !m1 && !m2)
			break;
			
		if(h1 * 60 + m1 <= h2 * 60 + m2)
			cout << 60 * (h2 - h1) + (m2 - m1) << endl;
		else
			cout << 1440 + 60 * (h2 - h1) + (m2 - m1) << endl;		
	}
	
	return 0;
}
