#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	int n;
	char record[11];
	
	while(cin >> n)
	{
		int kill = 0;
		int assist = 0;
		int die = 0;
		int flag = 0;
		
		for(int i = 0; i < n; i++)
		{
			cin >> record;
			
			if(!strcmp(record, "Get_Kill"))
			{
				kill++;
				flag++;
				
				switch(flag)
				{
					case 1:
					case 2:
						cout << "You have slain an enemie." << endl;
						break;
					case 3:
						cout << "KILLING SPREE!" << endl;
						break;
					case 4:
						cout << "RAMPAGE~" << endl;
						break;
					case 5:
						cout << "UNSTOPPABLE!\n" << endl;
						break;
					case 6:
						cout << "DOMINATING!" << endl;
						break;
					case 7:
						cout << "GUALIKE!" << endl;
						break;
					default:
						cout << "LEGENDARY!" << endl;
						break;
				}
			}
			else if(!strcmp(record, "Get_Assist"))
				assist++;
			else if(!strcmp(record, "Die"))
			{
				if(flag < 3)
					cout << "You have been slained." << endl;
				else
					cout << "SHUTDOWN." << endl;
				
				die++;
				flag = 0;
			}
		}
		
		cout << kill << "/" << die << "/" << assist << endl;
	}
	
	return 0;
}
