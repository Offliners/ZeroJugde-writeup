#include<iostream>

using namespace std;

int main(void)
{
	int apple[10];
	int hand;
	
	for(int i = 0; i < 10; i++)
		cin >> apple[i];
	
	cin >> hand;
	
	int count = 0;
	for(int i = 0; i < 10; i++)
		if(apple[i] <= hand + 30)
			count++;
	
	cout << count << endl;
	
	return 0;
}
