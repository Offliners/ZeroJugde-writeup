#include<iostream>
#include<algorithm>

#define MAX 10000

typedef struct point
{
	int head;
	int tail;
}Point;

int cmp(Point, Point);

using namespace std;

int main(void)
{
	int n, start, end;
	Point p[MAX];
	
	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
			cin >> p[i].head >> p[i].tail;
			
		sort(p, p + n, cmp);
		
		int count = 0;
		for(int j = 0; j < n; j++)
		{
			start = p[j].head;
			end = p[j].tail;
			
			while(j + 1 < n && p[j + 1].head < end)
			{
				if(p[j + 1].tail < end)
					j++;
				else
				{
					end = p[j + 1].tail;
					j++;
				}
			}
			count += end - start;
		}
		
		cout << count << endl;	
	}
	
	return 0;
}

int cmp(Point a, Point b)
{
	return a.head == b.head ? a.tail < b.tail : a.head < b.head;
}
