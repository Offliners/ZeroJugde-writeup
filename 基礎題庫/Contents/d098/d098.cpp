#include<iostream>
#include<sstream>

using namespace std;

int main(void)
{
	int n;
	string data;
	
	while(getline(cin, data))
	{
		string s;
		int sum = 0;
		int flag = 0;
		
		for(int i = 0; i <= data.length(); i++)
		{
			if((data[i] == ' ' || data[i] == '\0') && !flag)
			{
				stringstream ss(s);
				ss >> n;
				sum += n;
				s = "";
				n = 0;
			}
			else if((data[i] == ' ' || data[i] == '\0') && flag)
			{
				flag = 0;
				s = "";
			}
			else if(data[i] >= '0' && data[i] <= '9')
				s += data[i];
			else
				flag = 1;
		}
		
		cout << sum << endl;
	}
	
	return 0;
}
