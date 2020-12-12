#include<iostream>
#include<algorithm> 

void isFail(int, int*);

using namespace std;

int main(void)
{
	int n;
	int score[20];
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
			cin >> score[i];
			
		sort(score, score + n);
		
		isFail(n, score);
	}
	
	return 0;
}

void isFail(int n, int score[])
{
	int fail = 0;
	for(int i = 0; i < n - 1; i++)
	{
		cout << score[i] << " ";

		if(score[i] < 60)
			fail++;
	}
	cout << score[n-1] << endl;

	if(score[n-1] < 60)
		fail++;

	if(!fail)
		cout << "best case" << endl;
	else
		cout << score[fail-1] << endl;

	if(fail == n)
		cout << "worst case" << endl;
	else
		cout << score[fail] << endl;
}
