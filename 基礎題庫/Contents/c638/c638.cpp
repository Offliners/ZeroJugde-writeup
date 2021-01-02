#include<iostream>

using namespace std;

char sky[10][5] = {"甲", "乙", "丙", "丁", "戊", "己", "庚", "辛", "壬", "癸" };
char gnd[12][5] = {"子", "丑", "寅", "卯", "辰", "巳", "午", "未", "申", "酉", "戌", "亥" };

int main(void)
{
	int n;
	
	while(cin >> n)
	{
		n = (n - 1744) % 60;
		cout << sky[n % 10] << gnd[n % 12] << endl;
	}
	
	return 0;
}
