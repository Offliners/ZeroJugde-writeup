#include<iostream>

using namespace std;

int main(void)
{
	int num;
	int temp;
	
	while(cin >> num)
	{
		int max = 0;
		
		for(int i = 0; i < num; i++)
		{
			cin >> temp;
			
			if(temp > max)
				max = temp;
		}
		
		cout << max << endl;
	}
	
	return 0;
}
