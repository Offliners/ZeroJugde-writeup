#include<iostream>
#include<algorithm>

void whichTri(int, int, int);

using namespace std;

int main(void)
{
	int sides[3];
	
	while(cin >> sides[0] >> sides[1] >> sides[2])
	{
		sort(sides, sides + 3);
		
		cout << sides[0] << " " << sides[1] << " " << sides[2] << endl;
		
		whichTri(sides[0], sides[1], sides[2]);
	}
	
	return 0;
}

void whichTri(int a, int b, int c)
{
	if(a + b <= c)
		cout << "No" << endl;
	else if(a * a + b * b == c * c)
		cout << "Right" << endl;
	else if(a * a + b * b < c * c)
		cout << "Obtuse" << endl;
	else
		cout << "Acute" << endl;
}
