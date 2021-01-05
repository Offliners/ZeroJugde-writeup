#include<stdio.h>
#include<string.h>

struct Dict
{
	int known;
	int link[26];
}dict[150000];

int dictSize;

int insert(const char*);

int main(void)
{
	int n, flag;
	char temp[26];
	
	while(scanf("%d", &n) != EOF)
	{
		dictSize = 0;
		memset(&dict[0], 0, sizeof(dict[0]));
		
		for(int i = 0; i < n; i++)
		{
			scanf("%s", temp);
			insert(temp);
		}
		
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
		{
			scanf("%s", temp);
			flag = insert(temp);
			
			if(flag)
				printf("yes\n");
			else
				printf("no\n");
		}
	}
	
	return 0;
}

int insert(const char *str)
{
	int idx = 0;
	
	for(int i = 0; str[i]; i++)
	{
		if(!dict[idx].link[str[i] - 'a'])
		{
			dictSize++;
			memset(&dict[dictSize], 0, sizeof(dict[0]));
			dict[idx].link[str[i] - 'a'] = dictSize;
		}
		
		idx = dict[idx].link[str[i] - 'a'];
	}
	
	if(dict[idx].known)
		return 1;
	
	dict[idx].known = 1;
	return 0;
}
