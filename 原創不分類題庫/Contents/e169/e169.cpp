#include<iostream>

using namespace std;

int main(void)
{
	int n, score, total;
	int pick[100] = {0};
	
	while(1)
	{
		cin >> n;
		
		if(!n)
			break;
		
		for(int i = 0; i < n; i++)
		{
			cin >> score;
			pick[score % 100]++;
		}
		
		total = pick[0] * (pick[0] - 1) / 2 + pick[50] * (pick[50] - 1) / 2;
		pick[0] = 0;
		pick[50] = 0;
		
		for(int i = 0; i < 50; i++)
		{
			total += pick[i] * pick[100 - i];
			pick[i] = 0;
			pick[100 - i] = 0;
		}
		
		cout << total << endl;
	}
}
