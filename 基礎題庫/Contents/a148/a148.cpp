#include<iostream>

using namespace std;

int main(void)
{
	int n, score;
	double avg;
	
	while(cin >> n)
	{
		double sum = 0;
		
		for(int i = 0; i < n; i++)
		{
			cin >> score;
			sum += score;
		}
		
		avg = sum / n;
		
		if(avg > 59)
			cout << "no" << endl;
		else
			cout << "yes" << endl;
	}
	
	return 0;
}
