#include<iostream>

int next(int);
int isHappy(int);

using namespace std;

int main(void)
{
	int n, temp;
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
		{
			cin >> temp;
			
			cout << "Case #" << i + 1 << ": " << temp << " is ";
			if(isHappy(temp))
				cout << "a Happy number." << endl;
			else
				cout << "an Unhappy number." << endl;
		}
	}
	
	return 0;
		
}

int next(int num)
{
    int result = 0;
    int rem;
    
    while(num != 0)
    {
        rem = num % 10;
        num /= 10;
        result += rem * rem;
    }
    
    return result;
}

int isHappy(int n)
{
    int num1 = n;
    int num2 = n;
    
    do
    {
        num1 = next(num1);
        num2 = next(next(num2));
    }while(num2 != num1);
    
    return (num1 == 1) ? 1 : 0;
}
