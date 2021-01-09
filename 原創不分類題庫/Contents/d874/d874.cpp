#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	int L;
	
	while(cin >> L)
	{
		int temp = (int)sqrt(L);
		int step = 2 * temp - 1;
		
		step += (L - temp * temp) / temp;
		
		if(L % temp)
			step++;
		
		cout << step << endl;
	}
	
	return 0;
}
