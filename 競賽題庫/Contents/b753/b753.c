#include<stdio.h>
#include<string.h>

int check(char []);

int main(void)
{
	int n;
	char id[10];
	
	while(scanf("%d", &n) != EOF)
	{
		int T = 0;
		int O = 0;
		int F = 0;
		char data[10][11];
			
		for(int i = 0; i < n; i++)
		{
			scanf("%s", id);

			int flag = 0;
			for(int j = 0; j < T; j++)
			{
				if(!(strcmp(id, data[j])))
				{
					O += 1;
					flag = 1;
					break;
				}
			}
			
			if(flag)
				continue;
			
			if(check(id))
			{
				strcpy(data[T], id);
				T += 1;
			}
			else
				F += 1;
		}
		
		printf("%d,%d,%d\n", T, O, F);
	}
	
	return 0;
}

int check(char str[])
{
	int area[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34,
	            	18, 19, 20, 21, 22, 35, 23, 24, 25,
					26, 27, 28, 29, 32, 30, 31, 33};
	int verify = 0;
	int temp = area[str[0] - 'A'];
	
	verify += temp / 10 + (temp % 10) * 9;
	for(int i = 1; i < strlen(str); i++)
		verify += (str[i] - '0') * (9 - i);
		
	verify += str[strlen(str) - 1] - '0';
	
	return (str[1] == '1' || str[1] == '2') ? (!(verify % 10) ? 1 : 0) : 0;
}
