#include<iostream>

using namespace std;

int main(void)
{
	string echo;
	
	while(getline(cin, echo))
	{
		cout << echo << endl;
		for(int i = 1; i < 5; i++)
		{
			int count = 0;

			for(int j = 0; j < echo.length(); j++)
			{
				if(echo[j] == ' ')
					count++;

				if(count >= i && j != echo.length() - 1)
					cout << echo[j + 1];
			}
			cout << endl;
		}
	}
	
	return 0;
}
