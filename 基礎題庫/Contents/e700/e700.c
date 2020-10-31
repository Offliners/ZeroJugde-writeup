#include<stdio.h>

char *findConstellation(int);

int main(void)
{
	int m, d;
	
	while(scanf("%d/%d", &m, &d) != EOF)
		printf("%s\n", findConstellation(m * 100 + d));

	return 0;
}

char *findConstellation(int day)
{
	if (121 <= day && day <= 219)
		return "水瓶座";
	if (220 <= day && day <= 320)
		return "雙魚座";
	if (321 <= day && day <= 420)
		return "牡羊座";
	if (421 <= day && day <= 521)
		return "金牛座";
	if (522 <= day && day <= 621)
		return "雙子座";
	if (622 <= day && day <= 722)
		return "巨蟹座";
	if (723 <= day && day <= 821)
		return "獅子座";
	if (822 <= day && day <= 923)
		return "處女座";
	if (924 <= day && day <= 1023)
		return "天秤座";
	if (1024 <= day && day <= 1122)
		return "天蠍座";
	if (1123 <= day && day <= 1222)
		return "射手座";
	if (1223 <= day || day <= 120)
		return "摩羯座";
}
