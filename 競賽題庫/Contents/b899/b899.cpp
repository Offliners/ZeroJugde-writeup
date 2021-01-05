#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	int ptr[3][2];
	int target[2];
	int maxPtr;
	int side;
	
	while(cin >> ptr[0][0] >> ptr[0][1])
	{
		for(int i = 1; i < 3; i++)
			cin >> ptr[i][0] >> ptr[i][1];
		
		int max = 0;
		for(int i = 0; i < 3; i++)
		{
			side = pow(ptr[i % 3][0] - ptr[(i + 1) % 3][0], 2) + pow(ptr[i % 3][1] - ptr[(i + 1) % 3][1], 2);
			
			if(side > max)
			{
				max = side;
				maxPtr = i;
			}
		}
		
		for(int j = 0; j < 2; j++)
			target[j] = ptr[maxPtr % 3][j] + ptr[(maxPtr + 1) % 3][j] - ptr[(maxPtr + 2) % 3][j];
		
		cout << target[0] << " " << target[1] << endl;
	}
	
	return 0;
}
