#include<stdio.h>

char sky[10][5] = {"甲", "乙", "丙", "丁", "戊", "己", "庚", "辛", "壬", "癸" };
char gnd[12][5] = {"子", "丑", "寅", "卯", "辰", "巳", "午", "未", "申", "酉", "戌", "亥" };

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		n = (n - 1744) % 60;
		printf("%s%s\n", sky[n % 10], gnd[n % 12]);
	}
	
	return 0;
}
