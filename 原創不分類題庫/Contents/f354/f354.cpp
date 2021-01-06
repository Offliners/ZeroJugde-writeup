#include<iostream>

using namespace std;

void tableInit(void);

int table[1000001];

int main(void)
{
	int L;
	
	tableInit();
	while(cin >> L)
		cout << table[L] << endl;
	
	return 0;
}

void tableInit()
{	
	table[0] = 1;
	
	for(int i = 1; i < 1000001; i++)
	{
		table[i] = table[i - 1];
		if(!(i & 1))
		{
			table[i] *= 2;
			
			if(table[i] >= 10007)
				table[i] -= 10007;
		}
	}
}
