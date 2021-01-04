#include<iostream>

using namespace std;

int main(void)
{
	int n, m, cp, iv, temp, max_id;
	
	while(cin >> n >> m)
	{
		int max = 0;
		
		for(int i = 0; i < n; i++)
		{
			cin >> cp >> iv;
			
			switch(iv)
			{
				case 0 ... 29:
					temp = cp + m / 1000 * 10;
					break;
				case 30 ... 39:
					temp = cp + m / 1000 * 50;
					break;
				default:
					temp = cp + m / 1000 * 100;
					break;
			}
			
			if(temp > max)
			{
				max = temp;
				max_id = i + 1;
			}
				
		}
		
		cout << max_id << " " << max << endl;
	}
	
	return 0;
}
