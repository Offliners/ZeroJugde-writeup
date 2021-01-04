#include<iostream>
#include<sstream>
#include<map>

using namespace std;

string code[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

int main(void)
{
	int n;
	string s, temp, t;
	map<string, char>morse;
	
	for(int i = 0; i < 26; i++)
		morse[code[i]] = 'A' + i;
	
	while(cin >> n)
	{
		getline(cin, t);
		for(int j = 0; j < n; j++)
		{
			getline(cin, s);

			stringstream ss(s);
			while(ss >> temp)
				cout << morse[temp];
			cout << endl;
		}
	}
	
	return 0;
}
