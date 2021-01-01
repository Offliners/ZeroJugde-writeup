#include<iostream>
#include<iomanip>

using namespace std;

int isPerfect(int);

int main(void)
{
	int n, temp;
	int count = 0;
	
	while(1)
	{
		cin >> n;
		
		if(!n)
		{
			cout << "END OF OUTPUT" << endl;
			break;
		}
		
		if(!count)
			cout << "PERFECTION OUTPUT" << endl;
		
		temp = isPerfect(n);
		
		if(n == temp && n != 1)
			cout << setw(5) << n << "  PERFECT" << endl;
		else if(n < temp)
			cout << setw(5) << n << "  ABUNDANT" << endl;
		else
			cout << setw(5) << n << "  DEFICIENT" << endl;
		
		count++;
	}
	
	return 0;
}

int isPerfect(int num)
{
	int sum = 1;
	
	for(int i = 2; i < num; i++)
			if(!(num % i))
				sum += i;
	return sum;
}
