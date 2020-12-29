#include<iostream>

using namespace std;

int main(void)
{
	int candy, w, temp;
	
	while(cin >> candy >> w)
	{
		int k = 0;
		int count = 0;
		
		while(w > 0)
		{
			temp = candy / 12;
			
			if(w < temp)
				temp = w;
			
			if(temp)
			{
				candy -= 11 * temp;
				w -= temp;
				k += temp;
				count += temp;
			}
			
			candy += k;
			k = 0;
			
			if(candy < 12)
			{
				w -= 12 - candy;
				candy = 12;
			}
		}
		
		cout << count << endl;
	}
	
	return 0;
}
