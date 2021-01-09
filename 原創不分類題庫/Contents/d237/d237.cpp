#include<iostream>
#include<cmath>

using namespace std;

int isPrime(int);

int main(void)
{
	long long int ans = 2;
	
	for(int i = 3; i <= 2000000; i += 2)
		if(isPrime(i))
			ans += i;
	
	cout << ans << endl;
	
	return 0;
}

int isPrime(int n)
{
	if(!(n % 2))
		return 0;
	
	for(int i = 3; i * i <= n; i += 2)
		if(!(n % i))
			return 0;
	
	return 1;
}
