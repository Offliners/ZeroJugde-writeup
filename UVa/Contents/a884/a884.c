#include<stdio.h>
#include<string.h>

#define MAX 10001

int A[MAX];
int B[MAX];
int result[MAX];
char a[MAX], b[MAX];

void printResult(void);
void sub(void);
void str2int(char*, int*);

int main(void)
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{	
		for(int i = 0; i < n; i++)
		{	
			scanf("%s %s", a, b);
			
			for(int i = 0; i < MAX; i++)
			{
				A[i] = 0;
				B[i] = 0;
				result[i] = 0;
			}
			
			str2int(a, A);
			str2int(b, B);
			
			sub();
		}
	}
	
	return 0;
}

void printResult()
{
	int i;
	for(i = MAX - 1; i >= 0; i--)
		if(result[i] != 0)
			break;
	
	for(; i >= 0; i--)
		printf("%d", result[i]);
	
	printf("\n");
}

void sub()
{	
	int borrow = 0;
	int i;
	
	for(i = 0; i < MAX; i++)
	{
		result[i] = A[i] - B[i] - borrow;
		
		if(result[i] < 0)
		{
			result[i] += 10;
			borrow = 1;
		}
		else
			borrow = 0;
	}
	
	if(!result[MAX - 1])
		printResult();
	else
	{
		for(i = 0; i < MAX; i++)
			result[i] = 9 - result[i];
		
		result[0]++;
		
		for(i = 0; i < MAX - 1; i++)
		{
			if(result[i] >= 10)
			{
				result[i + 1] += result[i] / 10;
				result[i] %= 10;
			}
		}
		
		printf("-");
		printResult();
	}
}

void str2int(char *s, int *d)
{
	for(int i = 0, j = strlen(s) - 1; j >= 0; i++, j--)
		d[i] = s[j] - '0';
}
