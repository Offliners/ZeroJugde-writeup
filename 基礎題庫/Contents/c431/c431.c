#include<stdio.h>

int main(void)
{
	int n, temp;
	int data[101] = {0};
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		data[temp]++;
	}
	
	for(int j = 1; j < 101; j++)
		for(int k = 0; k < data[j]; k++)
			printf("%d ", j);
	
	return 0; 
}
