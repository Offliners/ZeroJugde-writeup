#include<iostream>

using namespace std;

int main(void)
{
	int h, m, s;
	
	while(cin >> h >> m >> s)
	{
		if(h * s >= m)
			cout << h << " " << m << " " << s << ". I will make it!" << endl;
		else
			cout << h << " " << m << " " << s << ". I will be late!" << endl;
	}
	
	return 0;
}
