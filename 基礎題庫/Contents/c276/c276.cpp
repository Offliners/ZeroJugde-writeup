#include<iostream>

using namespace std;

int main(void)
{
	int n;
	string guess;
	string ans;
	int flag[4];
	
	while(cin >> ans)
	{
		cin >> n;
		
		for(int t = 0; t < n; t++)
		{
			int a = 0;
			int b = 0;
			cin >> guess;
			
			for(int i = 0; i < 4; i++)
			{
				if(ans[i] == guess[i])
				{
					a++;
					flag[i] = 1;
				}
				else
					flag[i] = 0;
			}
			
			for(int j = 0; j < 4; j++)
			{
				if(flag[j] != 1)
				{
					for(int k = 0; k < 4; k++)
					{
						if(!flag[k] && (ans[k] == guess[j]) && (k != j))
						{
							b++;
							flag[k] = 2;
							break;
						}
					}
				}
			}
			
			cout << a << "A" << b << "B" << endl;
		}
	}
	
	return 0;
}
