#include<iostream>

using namespace std;

int isPerfect(int);

int main(void)
{
	int n, temp;
	
	while(1)
	{
		cin >> n;
		
		if(!n)
			break;
			
		temp = isPerfect(n);
		if(n == temp)
			cout << "=" << n << endl;
		else
			cout << (isPerfect(temp) == n ? temp : 0) << endl;
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
