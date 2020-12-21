#include<iostream>
#include<sstream>

using namespace std;

int main(void)
{
	string s, temp;
	
	while(getline(cin, s))
	{
		int word = 0;
	
		for(int i = 0; i < s.size(); i++)
            if(!isalpha(s[i]))
				s[i] = ' ';
		
		stringstream ss(s);
		while(ss >> temp)
			word++;
		
		cout << word << endl;
	}
	
	return 0;
}
