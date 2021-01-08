#include<stdio.h>
#include<math.h>

typedef struct Point
{
	double x;
	double y;
}point;

double triArea(point, point, point);

int main(void)
{
	int n;
	double area;
	point ptr[1000];
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
			scanf("%lf %lf", &ptr[i].x, &ptr[i].y);
		
		double max = 0.0;
		for(int i = 0; i < n - 2; i++)
		{
			for(int j = i + 1; j < n - 1; j++)
			{
				for(int k = j + 1; k < n; k++)
				{
					area = triArea(ptr[i], ptr[j], ptr[k]);
					
					if(area > max)
						max = area;
				}
			}
		}
		
		printf("%.6lf\n", max);
	}
	
	return 0;
}

double triArea(point p1, point p2, point p3)
{
	return 0.5 * fabs(p1.x * p2.y  + p1.y * p3.x + p2.x * p3.y - p2.y * p3.x - p1.y * p2.x - p1.x * p3.y);
}
