#include<stdio.h>

int data[100001];

int binarySearch(int [], int, int, int);
int cmp(int, int);

int main(void)
{
	int n, k, target;
	
	while(scanf("%d %d", &n, &k) != EOF)
	{
		for(int i = 0; i < n; i++)
			scanf("%d", &data[i]);
			
		for(int i = 0; i < k; i++)
		{
			scanf("%d", &target);
			
			printf("%d\n", binarySearch(data, 0, n - 1, target) + 1);
		}
	}
	
	return 0;
}

int binarySearch(int data[], int left, int right, int target)
{
	int mid;
	
	while(left <= right)
	{
		mid = (left + right) / 2;
		
		switch(cmp(data[mid], target))
		{
			case -1:
				return binarySearch(data, mid + 1, right, target);
				break;
			case 0:
				return mid;
				break;
			case 1:
				return binarySearch(data, left, mid - 1, target);
				break;
		}
	}
	
	return -1;
}

int cmp(int x,int y)
{
	if(x < y)
		return -1;
	else if(x == y)
		return 0;
	else
		return 1;
}
