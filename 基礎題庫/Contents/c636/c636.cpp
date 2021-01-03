#include<iostream>

using namespace std;

char symbol[12][5] = {"豬", "鼠", "牛", "虎", "兔", "龍", "蛇", "馬", "羊", "猴", "雞", "狗"};

int main(void)
{
	int n;
	
	while(cin >> n)
		cout << symbol[(n < 0 ? n + 121 : n) % 12] << endl;
	
	return 0;
}
