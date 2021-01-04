#include<iostream>

using namespace std;

int data[100001];

int main(void)
{
	int n, temp;
	
	while(cin >> n)
	{	
		int maxDiff = 0;
		cin >> data[0];
		
		int max = data[0];
		for(int i = 1; i < n; i++)
		{
			cin >> data[i];
			
			if(data[i] > max)
				max = data[i];
			else
			{
				temp = max - data[i];
				
				if(temp > maxDiff)
					maxDiff = temp;
			}
		}
		
		cout << maxDiff << endl;
	}
	
	return 0;
} 
