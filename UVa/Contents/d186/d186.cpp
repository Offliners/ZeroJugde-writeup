#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
	int a, b;
	
	while(1)
	{
		cin >> a >> b;
		
		if(!a && !b)
			break;
		
		int n1 = sqrt(a);
		int n2 = sqrt(b);
		
		if(n1 * n1 != a)
			n1++;
		
		cout << n2 - n1 + 1 << endl;
	}
	
	return 0;
}
