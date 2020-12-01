#include<iostream>
#include<algorithm>

#define MAX 1000

using namespace std;

typedef struct point
{
	int x;
	int y;
}Point;

int cmp(Point, Point);

int main(void)
{
	int n;
	Point p[MAX];
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
			cin >> p[i].x >> p[i].y;
		
		sort(p, p + n, cmp);
		
		for(int j = 0; j < n; j++)
			cout << p[j].x << " " << p[j].y << endl;
	}
	
	return 0;
}

int cmp(Point a, Point b)
{
	return a.x == b.x ? a.y < b.y : a.x < b.x;
}
