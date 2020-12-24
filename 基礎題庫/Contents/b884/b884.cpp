#include<iostream>

using namespace std;

int main(void)
{
	int n, yee, x, y;
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
		{
			cin >> x >> y;
			
			yee = 100 - x - y;
			
			if(0 < yee && yee <= 30)
				cout << "sad!" << endl;
			else if(yee > 30 && yee <= 60)
				cout << "hmm~~" << endl;
			else if(yee > 60 && yee < 100)
				cout << "Happyyummy" << endl;
			else
				cout << "evil!!" << endl;
		}
	}
	
	return 0;
}
