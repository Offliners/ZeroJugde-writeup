#include<iostream>

using namespace std;

int main(void)
{
	long int R, A, B;
	
	while(cin >> R >> A)
	{
		if(R == A)
			A -= 3;
		
		B = R - A;
		if(A < B)
			cout << A << "+" << B << "=" << R << endl;
		else
			cout << B << "+" << A << "=" << R << endl;
	}
	
	return 0;
}
