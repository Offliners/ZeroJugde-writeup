#include<stdio.h>

int main(void)
{
	int x, y, z, area;
	double s1, s2, s3;
	
	while(1)
	{
		scanf("%d %d %d %d", &area, &x, &y, &z);
		
		if(!x && !y && !z && !area)
			break;
		
		s1 = x * (y + 1) + 1;
		s2 = y * (z + 1) + 1;
		s3 = z * (x + 1) + 1;
		
		printf("%.2lf\n", area * (1 - x / s1 - y / s2 - z / s3));
	}
	
	return 0;
}
