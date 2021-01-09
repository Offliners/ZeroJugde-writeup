#include<iostream>

using namespace std;

int main(void)
{
	int n, num;
	
	while(cin >> n)
	{
		int max = 0;
		
		for(int i = 0; i < n; i++)
		{
			int rev = 0;
			
			cin >> num;
			while(num > 0)
			{
				rev = rev * 10 + num % 10;
				num /= 10;
			}
			
			if(rev > max)
				max = rev;
		}
		
		cout << max << endl;
	}
	
	return 0;
}
