#include<iostream>

using namespace std;

int main(void)
{
	int n, ctrl, step;
	
	while(cin >> n)
	{
		int x = 0;
		int y = 0;
		
		for(int i = 0; i < n; i++)
		{
			cin >> ctrl >> step;
			
			switch(ctrl)
			{
				case 0:
					y += step;
					break;
				case 1:
					x += step;
					break;
				case 2:
					y -= step;
					break;
				case 3:
					x -= step;
					break;
			}
		}
		
		cout << x << " " << y << endl;
	}
	
	return 0;
}
