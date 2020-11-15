#include<stdio.h>

int main(void)
{
	int n, ctrl;
	int top = 0;
	int stack[100001];
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &ctrl);
		
		switch(ctrl)
		{
			case 1:
				top--;
				break;
			case 2:
				printf("%d\n", stack[top]);
				break;
			case 3:
				scanf("%d", &stack[++top]);
				break;
		}
	}
	
	return 0;
}
