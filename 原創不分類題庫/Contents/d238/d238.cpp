#include<iostream>

using namespace std;

int main(void)
{
	int ans[3031] = {1};
	int exp = 0;
	
	for(int i = 0; i < 1000; i++)
	{
		for(int j = 0; j <= exp; j++)
			ans[j] <<= 1;
		
		for(int j = 0; j <= exp; j++)
		{
			ans[j + 1] += ans[j] / 10;
			ans[j] = ans[j] % 10;
		}
		
		if(ans[exp + 1])
			exp++;
	}
	
	int count = 0;
	for(int k = 0; k <= exp; k++)
		count += ans[k];
	
	cout << count << endl;
	
	return 0;
}
