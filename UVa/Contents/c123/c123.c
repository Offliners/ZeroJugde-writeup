#include<stdio.h>

int top;
int temp[1001];
int station[1001];

void pop(void);
void push(int);
int isEmpty(void);

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF && n)
	{
		while(scanf("%d", &temp[0]) && temp[0])
		{
			top = -1;
			
			for(int i = 1; i < n; i++)
				scanf("%d", &temp[i]);
			
			int count = 0;
			for(int i = 0; i < n; i++)
			{
				push(i + 1);
				
				while(station[top] == temp[count] && !isEmpty())
				{
					count++;
					pop();
				}
			}
			
			printf("%s\n", isEmpty() ? "Yes" : "No");
		}
		printf("\n");
	}

	return 0;
}

void pop()
{
	if(isEmpty())
		return;
	else
		top--;
}

void push(int n)
{
	top++;
	station[top] = n;
}

int isEmpty()
{
	return top == -1 ? 1 : 0;
}
