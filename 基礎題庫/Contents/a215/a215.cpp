#include<iostream>

using namespace std;

int main(void)
{
	int n, m;
	
	while(cin >> n >> m)
	{
		int i = 0;
		int sum = 0;
		
		while(sum <= m)
		{
			sum += n + i;
			i++;
		}
		
		if(!i)
			i++;
		
		cout << i << endl;
	}
	
	return 0;
}
