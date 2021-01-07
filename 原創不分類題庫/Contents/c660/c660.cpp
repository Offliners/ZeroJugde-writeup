#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	string peoples;
	
	while(getline(cin, peoples))
	{
		for(int i = 0; i < peoples.length(); i++)
			peoples[i] = tolower(peoples[i]);
		
		for(int i = 0; i < peoples.length(); i++)
		{
			if(peoples[i] != ' ')
			{
				peoples[i] = toupper(peoples[i]);
				cout << peoples << endl;
				peoples[i] = tolower(peoples[i]);
			}
		}
	}
	
	return 0;
} 
