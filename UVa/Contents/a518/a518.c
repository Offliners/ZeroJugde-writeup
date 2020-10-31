#include<stdio.h>
 
#define min(a, b) (a > b) ? (b) : (a)
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

int main(void)
{
	int start, end, temp;
	
	while(1)
	{
		scanf("%d %d", &start, &end);
		
		if(start == -1 && end == -1)
			break;
			
		if(start > end)
			SWAP(start, end, temp);
		
		printf("%d\n", min(end - start, 100 + start - end));
	}
	
	return 0;
}
