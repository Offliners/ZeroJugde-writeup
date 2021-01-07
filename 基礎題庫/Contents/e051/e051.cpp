#include<iostream>

using namespace std;

int main(void)
{
	string word;
	
	while(cin >> word)
	{
		for(int i = 1; i < word.length() - 1; i++)
			word[i] = '_';
		
		cout << word << endl;
	}
	
	return 0;
}
