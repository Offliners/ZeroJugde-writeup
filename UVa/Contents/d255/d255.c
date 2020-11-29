#include<stdio.h>

#define MAX 501

int phi[MAX] = {0};
int G[MAX] = {0};

void init(void);

int main(void)
{
	int N;

	init();
	while(1)
	{
		scanf("%d", &N);
		
		if(!N)
			break;
		
		printf("%d\n", G[N]);
	}
		
	
	return 0;
}

void init()
{	
	for(int i = 2; i < MAX; i++)
		phi[i] = i;
	
	for(int i = 2; i < MAX; i++)
	{
		if(phi[i] == i)
			for(int j = i; j < MAX; j += i)
				phi[j] = phi[j] / i * (i - 1);
		
		for(int j = 1; j * i < MAX; j++)
			G[j * i] += j * phi[i];
	}
	
	for(int i = 3; i < MAX; i++)
		G[i] += G[i - 1];
}
