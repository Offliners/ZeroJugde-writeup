#include<iostream>

int num;
char bin[16];

void dfs(int);

using namespace std;

int main(void)
{
	while(cin >> num)
	{
		bin[num] = 0;
		dfs(0);
	}
	
	return 0;
}

void dfs(int n)
{
	if(n == num)
	{
		cout << bin << endl;
		return;
	}
	
	bin[n] = '0';
	dfs(n + 1);
	bin[n] = '1';
	dfs(n + 1);
}
