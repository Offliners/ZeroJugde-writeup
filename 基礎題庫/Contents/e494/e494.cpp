#include<iostream>
#include<iomanip>
#include<cmath>

#define e 2.718281828459045
#define m 0.261497212847642

double Log(std::string);

using namespace std;

int main(void)
{
	string prime;
	
	while(cin >> prime)
		cout << fixed << setprecision(3) << log((Log(prime.substr(0, 15)) + prime.length() - 1) / log10(e)) + m << endl;
	
	return 0;
}

double Log(string temp)
{
	double exp = 1;
	double result = 0;
	
	for(int i = 0; i < temp.length(); i++)
	{
		result += exp * (temp[i] - '0');
		exp /= 10;
	}
	
	return log10(result);
}
