#include<stdio.h>

int main(void)
{
	int n, m, temp;
	
	scanf("%d %d", &n, &m);
	int S[40] = {0};
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &temp);
			
			if(temp > S[i])
				S[i] = temp;
		}
	}
	
	int sum = 0;
	for(int k = 0; k < n; k++)
		sum += S[k];
	
	printf("%d\n", sum);
	
	int flag = 0;
	for(int z = 0; z < n; z++)
	{
		if(!(sum % S[z]))
		{
			flag = 1;
			printf("%d ", S[z]);
		}
	}
	
	if(!flag)
		printf("-1\n");
	
	return 0;
}
