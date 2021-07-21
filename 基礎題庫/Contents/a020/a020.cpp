#include<iostream>

using namespace std;

int main(void)
{
	int zone[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34,
	                18, 19, 20, 21, 22, 35, 23, 24, 25,
					26, 27, 28, 29, 32, 30, 31, 33};
	
	string id;
	int total, i, j;
	
	while(cin >> id)
	{
		total = 0;
		total = zone[id[0]-'A'] % 10 * 9 + zone[id[0] - 'A'] / 10;
		i = 1;
		j = 8;
		for(i = 1; i < 9; ++i)
		{
			total += (id[i] - '0') * j;
			j--;
		}
		
		total += id[i] - '0';
		if(total % 10 == 0)
			cout << "real" << endl;
		else
			cout << "fake" << endl;
	}
	
	return 0;
}
