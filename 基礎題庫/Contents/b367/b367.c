#include<stdio.h>

int main(void)
{
	int T, N, M;
	int mat[122];
	
	while(scanf("%d", &T) != EOF)
	{
		for(int i = 0; i < T; i++)
		{
			scanf("%d %d", &N, &M);
			
			for(int j = 0; j < N * M; j++)
				scanf("%d", &mat[j]);
			
			int head = 0;
			int tail = M * N - 1;
			while(mat[head] == mat[tail])
			{
				if(head > tail)
					break;
				
				head++;
				tail--;
			}
			
			printf("%s\n", head < tail ? "keep defending" : "go forward");
		}
	}
	
	return 0;
}
