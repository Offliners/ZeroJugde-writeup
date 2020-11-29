#include<stdio.h>

int main(void)
{
	int init, a1, a2, a3;
	
	while(1)
	{
		scanf("%d %d %d %d", &init, &a1, &a2, &a3);
		
		if(!init && !a1 && !a2 && !a3)
			break;
		
		int ans = 0;
		int degree = 360 / 40;
		ans += 360 * 2;
		ans += ((init - a1 + 40) % 40) * degree;
		ans += 360;
		ans += ((a2 - a1 + 40) % 40) * degree;
		ans += ((a2 - a3 + 40) % 40) * degree;
		
		printf("%d\n", ans);
	}
	
	return 0;
}
