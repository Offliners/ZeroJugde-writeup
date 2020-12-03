#include<iostream>

using namespace std;

int main(void)
{
	int n, s, d, t1, t2;
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
		{
			cin >> s >> d;
			
			t1 = (s + d) / 2;
			t2 = (s - d) / 2;
			
			if(t1 >= 0 && t2 >= 0 && !((s + d) % 2))
				cout << t1 << " " << t2 << endl;
			else
				cout << "impossible" << endl;
		}
	}
	
	return 0;
}
