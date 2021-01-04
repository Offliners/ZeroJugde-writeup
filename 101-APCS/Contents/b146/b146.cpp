#include<iostream>

using namespace std;

int main(void)
{
	int t1, t2, day;
	int max = 0;
	
	for(int i = 0; i < 7; i++)
	{
		cin >> t1 >> t2;
		
		if(t1 + t2 > max)
		{
			max = t1 + t2;
			day = i + 1;
		}
	}
	
	if(max < 9)
		day = 0;
	
	cout << day << endl;
	
	return 0;
} 
