#include<stdio.h>
#include<string.h>

char tri[3][200000];

int cmp(char [], char []);
void bubbleSort(void);

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf(" %s %s %s", tri[0], tri[1], tri[2]);
			bubbleSort();
			printf("%s\n", tri[2]);
		}
	}
	
	return 0;
}

int cmp(char a[], char b[])
{
	if(strlen(a) > strlen(b))
		return 1;
	else if(strlen(a) < strlen(b))
		return 0;
	else
	{
		for(int i = 0; i < strlen(a); i++)
		{
			if(a[i] > b[i])
				return 1;
			else if(a[i] < b[i])
				return 0;
		}
	}
}

void bubbleSort()
{
	for(int i = 3; i > 0; i--)
	{
		for(int j = 0; j < i - 1; j++)
		{
			if(cmp(tri[j], tri[j+1]))
			{
				char temp[strlen(tri[j])];
				
				strcpy(temp, tri[j]);
				strcpy(tri[j], tri[j+1]);
				strcpy(tri[j+1], temp);
			}
		}
	}
}
