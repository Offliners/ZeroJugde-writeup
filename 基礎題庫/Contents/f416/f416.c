#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int KMP(char*, char*);
void cal(char*, int, int*);

int main(void)
{
	int n, k;
	char target[1000001];
	char data[1000001];

	while(scanf("%d", &n) != EOF)
	{
		scanf("%s", target);
		scanf("%s", data);
		
		if(n == KMP(target, data))
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	return 0;
}

int KMP(char *pat, char *txt)
{
	int M = strlen(pat);
	int N = strlen(txt);
	int *lps = (int*)malloc(sizeof(int)*M);
	int count = 0;
	
	cal(pat, M, lps);
	
	for(int i = 0, j = 0; i < N;)
	{
		if(pat[j] == txt[i])
		{
			j++;
			i++;
		}
		
		if(j == M)
		{
			count++;
			j = lps[j - 1];
		}
		else if(i < N && pat[j] != txt[i])
		{
			if(j)
				j = lps[j - 1];
			else
				i++;
		}
	}
	
	free(lps);
	
	return count;
}

void cal(char *pat, int M, int *lps)
{
	int len = 0;
	
	lps[0] = 0;
	for(int i = 1; i < M;)
	{
		if(pat[i] == pat[len])
		{
			len++;
			lps[i] = len;
			i++;
		}
		else
		{
			if(len)
				len = lps[len-1];
			else
			{
				lps[i] = 0;
				i++;
			}
		}
	}
}
